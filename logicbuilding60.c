//Write a recursive function to print the nth term of the Fibonacci series
int fib(int a)
{
    int c;
    if(a==1||a==2)
    {
        return a-1;
    }
    else
    {
        c=fib(a-1)+fib(a-2);
        return c;
    }
}

main()
{
    int n,k;
    printf("Enter a number : ");
    scanf("%d",&n);
    k=fib(n);
    printf("The nth term of the series is : %d",k);
    getch();
}
