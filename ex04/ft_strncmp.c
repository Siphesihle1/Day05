#include <unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int index;

	if (*s1 == '\0')
	{
		return (-1);
	}

	index = 0;
	while (index < n)
	{
		if (s1[index] < s2[index])
		{
			return (-1);
		}
		else if (s1[index] > s2[index])
		{
			return (1);
		}
		else 
		{
			index++;
		}
	}
	return 0;
}
