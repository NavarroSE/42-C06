/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manavarr <manavarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 20:11:31 by manavarr          #+#    #+#             */
/*   Updated: 2022/04/04 20:15:41 by manavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int a, char **b)
{
	int	i;

	i = 0;
	while (b[0][i] != '\0')
	{
		write(1, &b[0][i], 1);
		i++;
	}
	return (0);
}
