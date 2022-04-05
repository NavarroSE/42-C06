/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manavarr <manavarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 20:31:47 by manavarr          #+#    #+#             */
/*   Updated: 2022/04/05 13:14:08 by manavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int a, char **b)
{
	int	i;
	int	x;

	x = (a - 1);
	while (x >= 1)
	{
		i = 0;
		while (b[x][i] != '\0')
		{
			write(1, &b[x][i], 1);
			i++;
		}
		write(1, "\n", 1);
		x--;
	}
}
