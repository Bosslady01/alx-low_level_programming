#include <stdio.h>
/**
 * main-this is the entry point of the programme
 *
 * return: zero if no error, non-zero if there's error
*/
int main(void)
{
	printf("size of char:%ld byte(s)\n",sizeof(char));
	printf("size of int:%ld byte(s)\n",sizeof(int));
	printf("size of float:%ld byte(s)\n",sizeof(float));
	printf("size of long int:%ld byte(s)\n",sizeof(long int));
	printf("size of long long int:%ld byte(s)\n",sizeof(long long int));
	return (0)
}
