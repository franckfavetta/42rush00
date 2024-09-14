/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygille <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 11:32:13 by ygille            #+#    #+#             */
/*   Updated: 2024/09/14 12:55:01 by ygille           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_putchar.c"

void	corners(int longueur, int hauteur, int chauteur, int clongueur)
{
	if (clongueur == 0 && chauteur == 0)
		ft_putchar('/');
	if (clongueur == longueur && chauteur == 0)
		ft_putchar(92);
	if (clongueur == 0 && chauteur == hauteur)
		ft_putchar(92);
	if (clongueur == longueur && chauteur == hauteur)
		ft_putchar('/');
}

void	print_longueur(int longueur, int hauteur, int chauteur)
{
	int	clongueur;

	clongueur = 0;
	while (clongueur <= longueur)
	{
		corners(longueur, hauteur, chauteur, clongueur);
		if (chauteur == 0 || chauteur == hauteur)
		{
			if (clongueur != 0 && clongueur != longueur)
				ft_putchar('*');
		}
		else
		{
			if (clongueur == 0 || clongueur == longueur)
				ft_putchar('*');
			else
				ft_putchar(' ');
		}
		clongueur++;
	}
}

void	rush(int longueur, int hauteur)
{
	int	clongueur;
	int	chauteur;

	chauteur = 0;
	while (chauteur <= hauteur)
	{
		clongueur = 0;
		print_longueur(longueur, hauteur, chauteur);
		ft_putchar('\n');
		chauteur++;
	}
}
