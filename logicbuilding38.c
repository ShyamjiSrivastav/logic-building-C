//Program to check whether a number is co prime or not
main()
{
    int a,b,i,j=0,k;
    printf("Enter first number : ");
    scanf("%d",&a);
    printf("Enter second number : ");
    scanf("%d",&b);
    for(i=1;i<=a;i++)
    {
        if(a%i==0)
        {
            for(k=1;k<=b;k++)
            {
                if(b%k==0)
                {
                    if(i==k)
                    {
                        j=j+1;
                    }
                }
            }
        }
    }
    if(j==1)
    {
        printf("Co Prime number ");
    }
    else
    {
        printf("Not a Co Prime numbers ");
    }
    getch();
}
