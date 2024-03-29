//print first N natural number in reverse order
main()
{
    int N,i;
    printf("Enter a number : ");
    scanf("%d",&N);
    for(i=N;i>=1;i--)
    {
        printf("%d ",i);
    }
    getch();
}
