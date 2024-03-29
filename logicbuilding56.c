//Write a recursive program to print the sum of the digits of the given number
int sdnum(int a)
{
    int sum;
    if(a==0)
    {
        return 0;
    }
    else
    {
        sum=sdnum(a/10)+a%10;
        return sum;
    }
}

main()
{
    int n,k;
    printf("Enter a number : ");
    scanf("%d",&n);
    k=sdnum(n);
    printf("The sum of the digits of given numbers is %d",k);
    getch();
}
