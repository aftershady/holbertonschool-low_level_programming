#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <sys/stat.h>

int create_file(const char *filename, char *text_content)
{
	ssize_t file, writed;
	char *buffer;

	if (filename == NULL)
	{
		return -1;
	}

	file = open(filename, O_WRONLY | O_CREAT, 0600);
	if (file == -1)
	{
		return (0);
	}
	buffer = malloc(sizeof(text_content) + 1);
	if (buffer == NULL)
	{
		close(file);
		return (0);
	}
	if (buffer != NULL)
	{
		writed = write(file, text_content, strlen(text_content));
		if (writed == -1)
		{
			free(buffer);
			close(file);
			return (-1);
		}
	}
	free(buffer);
	close(file);


	return(1);

}
