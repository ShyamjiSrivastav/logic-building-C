// Write a function to print the next prime number of the given number
int prime(int);
int nextprime(int);

int prime(int a)
{
    int i,j=0;
    for(i=1;i<=a;i++)
    {
        if(a%i==0)
        {
            j=j+1;
        }
    }
    if(j==2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int nextprime(int c)
{
    int i;
    for(i=c+1; ;i++)
    {
        if(prime(i))
        {
            return i;
            break;
        }
    }
}


main()
{
    int b,s;
    printf("Enter a number: ");
    scanf("%d",&b);
    s=nextprime(b);
    printf("Next prime number is %d",s);
    getch();
}
