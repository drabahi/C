#include "ft_list.h"
#include "ft_memory.h"
#include "ft_string.h"

void	ft_lstdelstr(void *content, size_t content_size)
{
	char	*str;

	str = (char*)content;
	if (str && content_size == (ft_strlen(str) + 1))
		ft_memdel(&content);
}

