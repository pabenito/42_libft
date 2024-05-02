#include "./_main_utils.h"
#include "./libft.h"
#include <stdio.h>

#define SIZE 4

int	main(void)
{
	char	input[SIZE] = {0, 127, -1, 128};
	int		expected[SIZE] = {1, 1, 0, 0};
	int		result;
	int		i;

	printf("Function: ft_isascii\n");
	i = 0;
	while (i < SIZE)
	{
		result = ft_isascii(input[i]);
		if (result == expected[i])
			set_green();
		else
			set_red();
		printf("Input: '%c'; Result: %d; Expected: %d\n", input[i], result, expected[i]);
		i++;
	}
	reset_color();
}
