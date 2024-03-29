//Write a recursive function to print the factorial of the given number
int fact(int a)
{
    int fac;
    if(a==1 || a==0)
    {
        return 1;
    }
    else
    {
        fac=a*fact(a-1);
        return fac;
    }
}

main()
{
    int n,k;
    printf("Enter a number :");
    scanf("%d",&n);
    k=fact(n);
    printf("The factorial of number is : %d",k);
    getch();
}
