//Write a recursive function to print first N even natural numbers
void fnennum(int a)
{
    if(a>0)
    {
        fnennum(a-1);
        if(a%2==0)
        {
            printf("%d ",a);
        }
    }
}

main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    fnennum(n);
    getch();
}
