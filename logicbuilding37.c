//program to print the N terms of Fibonacci series
main()
{
    int N,a=1,b=1,c,i;
    printf("Enter the number : ");
    scanf("%d",&N);
    for(i=1;i<N;i++)
    {
        if(a==1)
        {
            printf("%d ",a);
        }
        if(b!=1)
        {
            printf("%d ",c);
        }
        c=a+b;
        a=b;
        b=c;
    }
    getch();
}
