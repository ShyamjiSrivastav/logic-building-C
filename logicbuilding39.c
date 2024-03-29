//program to print the prime number using efficient logic
#include<stdio.h>
#include<math.h>
main()
{
    int a,i,s;
    printf("Enter a number :");
    scanf("%d",&a);
    s=sqrt(a);
    for(i=2;i<=s;i++)
    {
        if(a%i==0)
        {
            break;
        }
    }
     if(i==s+1)
        {
            printf("Prime no.");
        }
        else
        {
            printf("Not prime");
        }
    getch();
}
