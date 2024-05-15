#include <stdio.h>

// Recursive function to print

// Fibonacci series

void fib(int a, int b, int sum, int N)

{

// Print first N term of the series

if (N != 0) {

printf(" %d", a);

sum = a + b;

a = b;

b = sum;

// Decrement N

N--;

// recursive call function fib

fib(a, b, sum, N);

}

}

// Driver Code

int main()

{

// Given Number N

int N = 10;

// First term as 0

// Second term as 1 and

// Sum of first and second term

fib(0, 1, 0, N);

return 0;

}
