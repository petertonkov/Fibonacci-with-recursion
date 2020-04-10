#include <stdlib.h>
#include <stdio.h>

int Fibonacci(int n)
{
	if (n == 1) return 0;
	if (n == 2) return 1;
	int sum = Fibonacci(n - 1) + Fibonacci(n - 2);
	return sum;
}
int main()
{
	int num = 46;
	printf("Fibonacci with recursion\n");
	printf("SUM = %d\n", Fibonacci(num));
	return 0;
}
