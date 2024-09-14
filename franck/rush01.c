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

void	one_line(int w, char *ptn)
{
	int	x;

	ft_putchar(ptn[0]);
	x = 0;
	while (++x < w - 1)
		ft_putchar(ptn[1]);
	if (w > 1)
		ft_putchar(ptn[2]);
	ft_putchar('\n');
}

void	rush0x(int w, int h, char *ptn)
{
	int	y;

	if (w < 1)
		w = 1;
	if (h < 1)
		h = 1;
	one_line(w, ptn);
	y = 0;
	while (++y < h - 1)
		one_line(w, ptn + 3);
	if (h > 1)
		one_line(w, ptn + 6);
}

void	rush01(int x, int y)
{
	rush0x(x, y, "/*\\* *\\*/");
}
