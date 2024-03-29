//Write a recursive function to print the sum of squares of first N natural numbers
int ssnnum(int a)
{
    int sum;
    if(a==1)
    {
        return 1;
    }
    else
    {
        sum=a*a+ssnnum(a-1);
        return sum;
    }
}

main()
{
    int n,k;
    printf("Enter a number : ");
    scanf("%d",&n);
    k=ssnnum(n);
    printf("The sum is squares are : %d",k);
    getch();
}
