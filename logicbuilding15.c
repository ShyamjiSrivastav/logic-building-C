//print N even natural numbers in reverse order
main()
{
    int N,i;
    printf("Enter the number : ");
    scanf("%d",&N);
    for(i=2*N;i>=1;i--)
    {
        if(i%2==0)
        {
            printf("%d ",i);
        }
    }
    getch();
}
