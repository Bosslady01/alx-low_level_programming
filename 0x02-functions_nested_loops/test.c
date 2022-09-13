#include <stdio.h>

int main(void)
{
	int i = 0, j;

	while (i < 5)
	{
		j = i;
		while (j < 5)
		{
			printf("/ ");
			j++;
		}

		printf("\n");
		i++;
	}

	return 0;
}