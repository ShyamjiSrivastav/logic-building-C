//print first N odd natural numbers
main()
{
    int N,i=1;
    printf("Enter a number : ");
    scanf("%d",&N);
    while(i<=2*N)
    {
        if(i%2)
        {
            printf("%d ",i);
        }
        i++;
    }
    getch();
}
