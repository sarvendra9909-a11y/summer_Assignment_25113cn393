#include <stdio.h>
#include <math.h>
int main()
{
    int start , end ,temp ,i ,count=0 , sum=0,l;
    printf("Enter starting No. and ending No.\n");
    scanf("%d %d",&start,&end);
    printf("Range of Armstrong No. between %d and %d is given below:\n",start,end);
     for(i=start;i<=end;i++)
     {
       temp = i;
       sum = 0;
       count = 0;
       // Counting the digits in i;
        while (temp>0)
        {
           temp /= 10;
           count++;
        }
        temp = i;
        // Calculating the sum of individual digits raised to the power count;
        while (temp>0)
        {
            l = temp%10;
            sum = sum + round(pow(l,count));
            temp = temp/10;
        }
         // Checking if No. is an Armstrong or NOT;
        if( sum == i)
        printf("%d ",i);
        
     }

    return 0;
}