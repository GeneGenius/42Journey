#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	i;
	void	*str;

	str = malloc(size * count);
	if (!str)
		return (NULL);
	i = 0;
	ft_bzero(str, size * count);
	return (str);
}
