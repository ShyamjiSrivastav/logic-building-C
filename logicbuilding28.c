//write a program to print reverse of number - method 2
main()
{
    int N,i,y=0,r;
    printf("Enter a number : ");
    scanf("%d",&N);
    for(i=1;N!=0;i++)
    {
        r=N%10;
        y=y*10+r;
        N=N/10;
    }
    printf("reverse of given number : %d",y);
    getch();
}
