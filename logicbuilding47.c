//Write a recursive function to print the square of first N natural numbers
void sqfnnum(int a)
{
    if(a>0)
    {
        sqfnnum(a-1);
        printf("%d ",a*a);
    }
}

main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    sqfnnum(n);
    getch();
}
