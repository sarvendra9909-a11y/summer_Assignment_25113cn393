#include<stdio.h>
int main()
{
    int i,n,p;
    printf("Enter a no.\n");
    scanf("%d",&n);
    printf("Multiplication table of %d is given below\n",n);
    for(i=1;i<=10;i++)
    {
        p = n*i;
        printf("%d*%d = %d\n",n,i,p);
    }
    return 0;
}