//write a program to print all prime factors of the number given by user for example 36=2 2 3 3
main()
{
    int a,i,j,r;
    printf("Enter a number : ");
    scanf("%d",&a);
    for(i=2;a!=1;i++)
    {
        r=a%i;
        for(j=1;r==0;j++)
        {
            printf("%d ",i);
            a=a/i;
            r=a%i;
        }
    }
    getch();
}
