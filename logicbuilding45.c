//Write recursive program to print the first N natural numbers
main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    natnum(n);
    getch();
}
void natnum(int a)
{
    if(a>0)
        {
            natnum(a-1);
            printf("%d ",a);
        }

}
