/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygille <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 11:32:13 by ygille            #+#    #+#             */
/*   Updated: 2024/09/14 13:15:42 by ygille           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "ft_putchar.c"

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

void	rush(int x, int y)
{
	int	longueur;
	int	hauteur;

	hauteur = 0;
	while (hauteur <= y)
	{
		longueur = 0;
		print_longueur(x, y, hauteur);
		ft_putchar('\n');
		hauteur++;
	}
}
