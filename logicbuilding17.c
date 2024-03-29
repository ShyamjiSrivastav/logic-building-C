//print table of user's choice
main()
{
    int N,i;
    printf("Enter a number : ");
    scanf("%d",&N);
    for(i=1;i<=10;i++)
    {
        printf("%d ",N*i);
    }
    getch();
}
