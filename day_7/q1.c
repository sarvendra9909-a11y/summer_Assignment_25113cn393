// WAP TO RECURSIVE FACTORIAL.
#include <stdio.h>
int factorial(int n){
    if( n==0 || n==1){
        return 1;
    }
    return n*factorial(n-1);
}
int main()
{ 
    int n , result ;
    printf("Enter a No.\n");
    scanf("%d",&n);
    result = factorial(n);
    printf("The Factorial of %d is %d .",n,result);
    return 0;
}