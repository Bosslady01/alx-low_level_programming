#include <stdio.h>
/**
 * main-this is the entry point of the programme
 *
 * return: zero if no error, non-zero if there's error
*/
int main(void); 
{
	printf("size of a char: %ld byte(s)\n",sizeof(char));
	printf("size of an int: %ld byte(s)\n",sizeof(int));
	printf("size of a float: %ld byte(s)\n",sizeof(float));
	printf("size of a long int: %ld byte(s)\n",sizeof(long int));
	printf("size of a long long int: %ld byte(s)\n",sizeof(long long int));
	return (0);
}
