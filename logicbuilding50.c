//Write a recursive function to print the sum of the first N natural number
int sfnnum(int a)
{
    int sum;
    if(a==0)
    {
        return 0;
    }
    else
    {
        sum=a+sfnnum(a-1);
    }
    return sum;
}

main()
{
    int n,k;
    printf("Enter a number : ");
    scanf("%d",&n);
    k=sfnnum(n);
    printf("sum is %d",k);
    getch();
}
