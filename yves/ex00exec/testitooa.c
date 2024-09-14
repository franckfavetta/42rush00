#include <unistd.h>
#include <unistdio.h>

void	sitoa(int num, char *result)
{
	int pos;
	int	add;

	pos = 0;
	if (num >=0)
	{
		while (num !=0)
		{
			result[pos] = '0' + (num % 10);
			num /= 10;
			pos++;
		}
	}
	else
	{
		result[pos] = '-';
		pos++;
		if (num == MAXLENGH)	// add max here
			add = 1;
		num *= -1;
		while (num != 0)
		{
			result[pos] = '0' + (num % 10);
			num /= 10;
			pos++;
		}
		result[1] += 1;
	}
}

//then revert this string and it's good

		
int	main()
{
	unsigned char	result[25]
	ft_sitoa(55, result);
	printf("%s",result);
}
