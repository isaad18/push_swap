#include"push_swap.h"

int	*sb(t_data *data)
{
	int	c;

	c = data->stack[0];
	data->stack[0] = data->stack[1];
	data->stack[1] = c;
	ft_printf("%s\n", "sb");
	return (data->stack);
}
