/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygille <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 11:32:13 by ygille            #+#    #+#             */
/*   Updated: 2024/09/14 14:18:46 by ygille           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_putchar.c"

void	corners(int x, int y, int hauteur, int longueur)
{
	if (longueur == 1 && hauteur == 1)
		ft_putchar('/');
	if ((longueur == x && hauteur == 1) && x > 1)
		ft_putchar('\\');
	if ((longueur == 1 && hauteur == y) && y > 1)
		ft_putchar('\\');
	if ((longueur == x && hauteur == y) && (y > 1 && x > 1))
		ft_putchar('/');
}

void	print_longueur(int x, int y, int hauteur)
{
	int	longueur;

	longueur = 1;
	while (longueur <= x)
	{
		corners(x, y, hauteur, longueur);
		if (hauteur == 1 || hauteur == y)
		{
			if (longueur != 1 && longueur != x)
				ft_putchar('*');
		}
		else
		{
			if (longueur == 1 || longueur == x)
				ft_putchar('*');
			else
				ft_putchar(' ');
		}
		longueur++;
	}
}

void	rush(int x, int y)
{
	int	hauteur;

	if (x > 0 && y > 0)
	{
		hauteur = 1;
		while (hauteur <= y)
		{
			print_longueur(x, y, hauteur);
			ft_putchar('\n');
			hauteur++;
		}
	}
}
