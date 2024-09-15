/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testatoi.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygille <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 11:05:24 by ygille            #+#    #+#             */
/*   Updated: 2024/09/15 11:14:58 by ygille           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	satoi(char *str)
{
	int sign;
	int pos;
	int num;
	
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
		num = num + (str[pos] - 48);
		if (str[pos + 1])
			num *=10;
		pos++;
	}
	num *= sign;
	return (num);
}

int	main(void)
{
	char	a[] = "-123";
	int	b;

	printf("%s\n",a);
	b = satoi(a);
	printf("%d",b);
	return (0);
}
