#include <stdio.h>
/**
 * main - prints the size of various types on the computer it is compiled
 *  and run on.
 *  Return: Always  0.
 *  Description: "this is the description of this programme"
 **/
int main(void)
{
	printf("size of char: %zu byte(s)\n", sizeof(char));
	printf("size of int: %zu byte(s)\n", sizeof(int));
	printf("sizs of long int: %zu byte(s)", sizeof(long int));
	printf("size of long long int: %zu byte(s)", sizeof(long long int));
	printf("size of float: %zu byte(s)", sizeof(float));
	return (0)
}
