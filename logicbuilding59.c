//write a program to print the Fibonacci series up to given number - A simple program using while loop
main()
{
    int a=0,b=1,c,n;
    printf("Enter a number up to which you want to print the series :");
    scanf("%d",&n);
    printf("The Fibonacci series = ");
    while(n>0)
    {
        printf("%d ",a);
        c=a+b;
        a=b;
        b=c;
        n--;
    }
    getch();
}
