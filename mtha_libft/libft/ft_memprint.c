
#include <unistd.h>
#include <string.h>

void	ft_memprint(void *ptr, size_t size)
{
	write(1, ptr, size);
}
