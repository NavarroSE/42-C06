/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manavarr <manavarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 20:31:53 by manavarr          #+#    #+#             */
/*   Updated: 2022/04/04 20:39:18 by manavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int a, char **b)
{
	int	i;
	int	x;

	x = 1;
	while (x <= a)
	{
		i = 0;
		while (b[x][i] != '\0')
		{
			write(1, &b[x][i], 1);
			i++;
		}
		write(1, "\n", 1);
		x++;
	}
}

int	main(int a, char **b)
{
	int	temp;
	int	n;

	n = 0;
	a--;
	while (n < a)
	{
		if (b[n][0] > b[n + 1][0])
		{
			temp = b[n][0];
			b[n][0] = b[n + 1][0];
			b[n + 1][0] = temp;
			n = 0;
		}
		else
			n++;
	}
	ft_putchar(a, b);
	return (0);
}
