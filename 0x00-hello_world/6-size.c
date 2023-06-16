#include <stdio.h>
/**
 * main - main block
 * Return: 0
 */
int main(void)
{ 
	printf("Size of a char: %t octects\n", sizeof(char));
	printf("Size of int: %t octets \n", sizeof(int));
	printf("Size of long int: %t octets \n", sizeof(long int));
	printf("Size of long long int : %t octets \n", sizeof(long long int));
	printf("Size of float : %t octets \n", sizeof(float));
	return 0;
}

