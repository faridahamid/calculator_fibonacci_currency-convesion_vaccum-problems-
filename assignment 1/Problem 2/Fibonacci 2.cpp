#include <iostream>
using namespace std;

int fib(int n)
{
    if (n == 0 || n == 1) return n;
    return fib(n-1) + fib(n-2);
}
int main()
{
int n;
cout << "Enter a number: ";
cin >> n;
cout << "The " << n << "th term in the Fibonacci series is: " << fib(n);
return 0;
}
