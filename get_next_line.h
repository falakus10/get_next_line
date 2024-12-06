#ifndef GET_NEXT_LINE_H
#define GET_NEXT_LINE_H

#ifndef BUFFER_SIZE
#define BUFFER_SIZE 16
#endif

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

int	found_new_line(char *buff);
char	*ft_strjoin(char const *s1, char const *s2);

#endif