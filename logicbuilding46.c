//Write a recursive function to print first N natural numbers in reverse order
void natnum(int a)
{
    if(a>0)
    {
        printf("%d ",a);
        natnum(a-1);
    }
}

main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    natnum(n);
    getch();
}
