//print the N odd natural number in reverse order
main()
{
    int N,i;
    printf("Enter a number : ");
    scanf("%d",&N);
    for(i=2*N;i>=1;i--)
    {
        if(i%2)
        {
            printf("%d ",i);
        }
    }
    getch();
}
