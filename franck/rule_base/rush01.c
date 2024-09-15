/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffavetta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 13:55:08 by ffavetta          #+#    #+#             */
/*   Updated: 2024/09/14 15:38:00 by ffavetta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

//reprise du code de Yves
//sous forme d'une base de regles
void	corners(int x, int y, int height, int width)
{
}

void	print_width(int x, int y, int height)
{
}

void	rule(int conditon, char c)
{
	if (conditon)
		ft_putchar(c);
}

void	rush(int x, int y)
{
	int	width;
	int	height;

	height = 1;
	if (x > 0 && y > 0)
		while (height <= y)
		{
			width = 1;
			while (width <= x)
			{
				rule(width == 1 && height == 1, '/');
				rule((width == x && height == 1) && x > 1, '\\');
				rule((width == 1 && height == y) && y > 1, '\\');
				rule((width == x && height == y) && (y > 1 && x > 1), '/');
				rule((height == 1 || height == y) && width != 1 && width != x, '*');
				rule(!(height == 1 || height == y) && (width == 1 || width == x), '*');
				rule(!(height == 1 || height == y) && !(width == 1 || width == x), ' ');
				width++;
			}
			ft_putchar('\n');
			height++;
		}
}
