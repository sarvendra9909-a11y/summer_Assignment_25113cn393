// WAP TO RECURSIVE FIBONACCI .
#include <stdio.h>

int fib(int n){
    if( n==1 || n==2){
        return 1;
    }
    return ( fib(n-1) + fib(n-2));
}

int main()
{
    int n , result ;
    printf("Enter the term of Fibonacci series.\n");
    scanf("%d",&n);
    result = fib(n);
    printf("The %dth term of Fibonacci series is %d .",n,result);
    return 0;
}