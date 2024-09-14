/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygille <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 11:32:13 by ygille            #+#    #+#             */
/*   Updated: 2024/09/14 19:44:14 by ygille           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "ft_putchar.c"

void	corners(int x, int y, int height, int width)
{
	if (width == 1 && height == 1)
		ft_putchar('A');
	if ((width == x && height == 1) && x > 1)
		ft_putchar('C');
	if ((width == 1 && height == y) && y > 1)
		ft_putchar('C');
	if ((width == x && height == y) && (y > 1 && x > 1))
		ft_putchar('A');
}

void	print_width(int x, int y, int height)
{
	int	width;

	width = 1;
	while (width <= x)
	{
		corners(x, y, height, width);
		if (height == 1 || height == y)
		{
			if (width != 1 && width != x)
				ft_putchar('B');
		}
		else
		{
			if (width == 1 || width == x)
				ft_putchar('B');
			else
				ft_putchar(' ');
		}
		width++;
	}
}

void	rush(int x, int y)
{
	int	height;

	if (x > 0 && y > 0)
	{
		height = 1;
		while (height <= y)
		{
			print_width(x, y, height);
			ft_putchar('\n');
			height++;
		}
	}
}
