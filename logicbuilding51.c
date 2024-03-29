//Write a recursive function to print the sum of the first N odd natural numbers
int sonnum(int a)
{
    int sum,j;
    if(a==1)
    {
        return 1;
    }
    else
    {
        sum=2*a-1+sonnum(a-1);
        return sum;
    }
}

main()
{
    int n,k;
    printf("Enter the number : ");
    scanf("%d",&n);
    k=sonnum(n);
    printf("The sum is : %d",k);
    getch();
}
