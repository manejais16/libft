#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	char	*result;
	int	len;

	result = ft_strjoin(s, "\n");
	len = ft_strlen(result);
	write(fd, result, len);
	free(result);
}	
