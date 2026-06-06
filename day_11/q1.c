// WAP TO WRITE FUNCTION TO FIND SUM OF TWO NUMBERS .
#include <stdio.h>
int sum(int a , int b)
{
    int c = a+b;
    return c;
}

int main()
{
    int a , b , result;
    printf("Enter two no.\n");
    scanf("%d%d",&a,&b);
    result = sum( a , b);
    printf("Sum of %d and %d is %d .",a , b ,result);
    return 0;
}