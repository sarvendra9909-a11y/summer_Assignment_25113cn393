#include <stdio.h>
int find_gcd(int a,int b){
    while (b!=0)
    {
       int remainder = a%b;
       a = b;
       b = remainder;
    }
    return a;
}

int main ()
{
    int num1,num2,gcd;
    printf("Enter two integers:\n");
    scanf("%d %d",&num1,&num2);
    gcd = find_gcd(num1,num2);
    printf("GCD of %d and %d is %d.",num1,num2,gcd);
    return 0;
}