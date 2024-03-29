//write a program to print the first N terms of the series 1+3+6+10+15....
main()
{
    int N,i,sum=0;
    printf("Enter a number : ");
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        sum=sum+i;
        printf("%d ",sum);
    }
    getch();
}
