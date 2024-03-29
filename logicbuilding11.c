//print first N even natural numbers
main()
{
    int N,i;
    printf("Enter a Number : ");
    scanf("%d",&N);
    for(i=1;i<=2*N;i++)
    {
        if(i%2==0)
        {
            printf("%d ",i);
        }
    }
    getch();
}
