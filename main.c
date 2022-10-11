#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int combination(int n, int r)
{
	int a, b, c;
	a = factorial(n);
	b = factorial(n-r);
	c = factorial(r);
	return (a/(b*c));
}

int factorial(int n)
{
	int i;
	int res = 1;
	for (i=1; i<=n; i++)
		res = res*i;
	return res;
}

int main(int argc, char *argv[]) 
{
	int n, r, result;
	
	printf("input two integer: ");
	scanf("%d %d", &n, &r);
	
	result = combination(n, r);
	
	printf("The result is %d", result);
	
	return 0;
}
