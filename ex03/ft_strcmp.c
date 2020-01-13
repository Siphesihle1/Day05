#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int index;
	
	if (*s1 == '\0')
	{
		return (-1);
	}

	index = 0;
	while (s1[index] != '\0')
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
