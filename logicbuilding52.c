//Write a recursive function to calculate the product of first n natural numbers
int prodn(int a)
{
    int prod;
    if(a==1)
    {
        return 1;
    }
    else
    {
        prod=a*prodn(a-1);
        return prod;
    }
}

main()
{
    int n,k;
    printf("Enter a number : ");
    scanf("%d",&n);
    k=prodn(n);
    printf("The product is : %d",k);
    getch();
}
