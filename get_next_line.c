#include "get_next_line.h"

char	*firstline(int fd, char *buffer)
{
	char 	*buff;
	int		char_read;

	char_read = 1;
	buff = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buff)
		return (NULL);
	while (found_new_line(buffer) == 0 && char_read != 0)
	{
		char_read = read(fd, buff, BUFFER_SIZE);
		if (char_read == -1)
		{
			free (buff);
			free (buffer);
			return (NULL);
		}
		buff[char_read] = '\0';
		buffer = ft_strjoin(buffer, buff);
	}
	return (buffer);
}

char	*get_next_line(int fd)
{
	char	*line;
	static char	*buff;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buff = firstline(fd , buff);
	if (buff == NULL)
		return (NULL);
	line = get_new_line(buff);
	buff = get_new_buffer(buff);
	return (line);
}