int	satoi(char *str)
{
	int sign;
	int pos;
	int num;
	
	pos = 0;
	sign = 1;
	if (str[pos] == '-')
	{
		sign = -1;
		pos++;
	}
	while (str[pos])
	{
		num = num + (str[pos] - 48);
		if (str[pos++])
			num *=10;
		pos++;
	}
	num *= sign;
	return (num);
}
