/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygille <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 11:30:46 by ygille            #+#    #+#             */
/*   Updated: 2024/09/15 16:57:07 by ygille           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rush(int x, int y);

int	satoi(char *str)
{
	int	sign;
	int	pos;
	int	num;

	pos = 0;
	sign = 1;
	num = 0;
	if (str[pos] == '-')
	{
		sign = -1;
		pos++;
	}
	while (str[pos])
	{
		if (! (str[pos] >= '0' && str[pos] <= '9'))
			return (0);
		num = num + (str[pos] - 48);
		if (str[pos + 1])
			num *= 10;
		pos++;
	}
	num *= sign;
	return (num);
}

int	main(int argc, char *argv[])
{
	int	x;
	int	y;

	if (argc != 3)
		return (1);
	x = satoi(argv[1]);
	y = satoi(argv[2]);
	rush (x, y);
	return (0);
}
