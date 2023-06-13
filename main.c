/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedrano <lmedrano@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 11:40:16 by lmedrano          #+#    #+#             */
/*   Updated: 2023/06/13 15:18:58 by lmedrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rush(int x, int y);

int	main(void)
{
	int	x;
	int	y;

	x = 1;
	y = 10;
	if ((y < 0 && x == 0) || (x < 0 && y == 0))
		write(1, "value should not be negative and be above 0\n", 44);
	else if (x < 0 || y < 0)
		write(1, "value should not be negative\n", 29);
	else if (x == 0 || y == 0)
		write(1, "value should be above 0\n", 24);
	else
		rush(x, y);
	return (0);
}
