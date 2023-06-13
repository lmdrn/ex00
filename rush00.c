/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedrano <lmedrano@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 11:42:14 by lmedrano          #+#    #+#             */
/*   Updated: 2023/06/13 15:30:57 by lmedrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_row(int x)
{
	int		i;

	ft_putchar('o');
	i = 1;
	while (i < x - 1)
	{
		ft_putchar('-');
		i++;
	}
	if (x != 1)
		ft_putchar('o');
	ft_putchar('\n');
}

/* // for RUSH 01 */
/* void	ft_last_row(int x) */
/* { */
/* 	int		i; */

/* 	ft_putchar('\\'); */
/* 	i = 1; */
/* 	while (i < x - 1) */
/* 	{ */
/* 		ft_putchar('*'); */
/* 		i++; */
/* 	} */
/* 	if (x != 1) */
/* 		ft_putchar('/'); */
/* 	ft_putchar('\n'); */
/* } */

void	ft_col(int x, int y)
{
	int		i;
	int		j;

	j = 1;
	while (j < y - 1)
	{
		ft_putchar('|');
		i = 1;
		while (i < x - 1)
		{
			ft_putchar(' ');
			i++;
		}
		if (x != 1)
			ft_putchar('|');
		ft_putchar('\n');
		j++;
	}
}

void	rush(int x, int y)
{
	ft_row(x);
	if (y != 1)
	{
		ft_col(x, y);
		ft_row(x);
	}
}
