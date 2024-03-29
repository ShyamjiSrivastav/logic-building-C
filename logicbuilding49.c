//Write a recursive function to print first N odd natural numbers
void fnonnum(int a)
{
    if(a>0)
    {
        fnonnum(a-1);
        if(a%2!=0)
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
    fnonnum(n);
    getch();
}
