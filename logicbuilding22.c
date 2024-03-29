//write a program to print the sum of the first N even natural numbers
main()
{
    int N,i,sum=0;
    printf("Enter a number : ");
    scanf("%d",&N);
    for(i=1;i<=2*N;i++)
    {
        if(i%2==0)
        {
            sum=sum+i;
        }
    }
    printf("%d ",sum);
    getch();
}
