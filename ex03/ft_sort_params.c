/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manavarr <manavarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 20:31:53 by manavarr          #+#    #+#             */
/*   Updated: 2022/04/06 13:30:26 by manavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i++]);
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	c;
	int	ret;

	c = 0;
	ret = 0;
	while ((s1[c] != '\0' || s2[c] != '\0') && (s1[c] == s2[c]))
	{
		c++;
	}
	ret = s1[c] - s2[c];
	return (ret);
}

void	ft_swap(char **a, char **b)
{
	char	*temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	main(int a, char **b)
{
	int	i;
	int	j;

	j = 0;
	while (j < a - 1)
	{
		i = 1;
		while (i < a - 1)
		{
			if (ft_strcmp(b[i], b[i + 1]) > 0)
				ft_swap(&b[i], &b[i + 1]);
			i++;
		}	
		j++;
	}
	i = 0;
	while (i < a)
	{
		ft_putstr(b[i]);
		ft_putchar('\n');
		i++;
	}
	return (0);
}
