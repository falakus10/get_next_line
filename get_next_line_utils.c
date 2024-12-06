#include "get_next_line.h"

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	found_new_line(char *buff)
{
	int	i;

	i = 0;
	if (!buff)
		return (0);
	while (buff[i] != '\0')
	{
		if (buff[i] == '\n')
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	int		i;
	int		j;

	result = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		result[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		result[i] = s2[j];
		j++;
		i++;
	}
	result[i] = '\0';
	return (result);
}

char	*get_new_line(char *buff)
{
	char	*line;
	int		new_line;
	int		i;

	new_line = found_new_line(buff);
	while (buff[i] != '\0' && buff[i] != '\n')
		i++;
	line = malloc(sizeof(char) * (i + 1 + new_line));
	if (line = NULL)
		return (NULL);
	i = 0;
	while (buff[i] != '\0' && buff[i] != '\n')
	{
		line[i] = buff[i];
		i++;
	}
	if (buff[i] == '\n')
	{
		line[i] = '\n';
		i++;
	}
	line[i] = '\0';
	return (line);
}