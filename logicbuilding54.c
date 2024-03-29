//Write a recursive function to print the sum of first N even natural numbers
int senum(int a)
{
    int sum;
    if(a==1)
    {
        return 2;
    }
    else
    {
        sum=2*a+senum(a-1);
        return sum;
    }
}

main()
{
    int n,k;
    printf("Enter a number : ");
    scanf("%d",&n);
    k=senum(n);
    printf("The sum is : %d",k);
    getch();
}
