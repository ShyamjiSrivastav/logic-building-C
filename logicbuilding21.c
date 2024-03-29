//write a program to print the N terms of the series 2+5+10+17+26+37..
main()
{
    int N,i,sum=1,j;
    printf("Enter the number : ");
    scanf("%d",&N);
    for(i=1,j=1;i<=N;i++,j=j+2)
    {
        sum=sum+j;
        printf("%d ",sum);
    }
    getch();
}

