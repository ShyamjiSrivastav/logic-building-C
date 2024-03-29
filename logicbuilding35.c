//Write a program to print all prime numbers between two numbers given by user
main()
{
    int a,b,i,j=0;
    printf("Enter first number : ");
    scanf("%d",&a);
    printf("Enter second number : ");
    scanf("%d",&b);
    printf("Prime numbers are : ");
    while(a!=b)
    {
        for(i=1;i<=a;i++)
        {
            if(a%i==0)
            {
                j=j+1;
            }
        }
        if(j==2)
        {
            printf("%d ",a);
        }
        a++;
        j=0;
    }
    getch();
}
