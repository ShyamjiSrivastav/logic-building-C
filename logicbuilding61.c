//Write a recursive function to print the Fibonacci series up to n terms
int fib(int a)
{
    if(a<=1)
    {
        return a;
    }
    else
    {
        return fib(a-1)+fib(a-2);
    }
}

main()
{
    int n,i;
    printf("Enter a number : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("%d ",fib(i));
    }
    getch();
}
