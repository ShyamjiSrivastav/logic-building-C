//Write a recursive function to print the binary equivalent of decimal number - conversion of decimal to binary
void dtob(int a)
{
    int r;
    if(a>0)
    {
        dtob(a/2);
        r=a%2;
        printf("%d",r);
    }
}

main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    dtob(n);
    getch();
}
