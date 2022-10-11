#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int sumTwo (int a, int b)
{
	int result;
	result = a+b;
	return result;
}

int square (int n)
{
	return (n*n);
}

int get_max (int x, int y)
{
	if (x>y)
		return x;
	else
		return y;
}

int main(int argc, char *argv[]) {
	int result1, result2, result3;
	
	result1 = sumTwo(2, 5);
	result2 = square(5);
	result3 = get_max(99, 77);
	
	printf("sumTwo result: %d, square result: %d, get_max result: %d", result1, result2, result3);
	
	return 0;
}
