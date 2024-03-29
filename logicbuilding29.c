//Write a program to print whether a given number is Armstrong number or not
main()
{
    int N,x,i,z,y=0;
    printf("Enter a number : ");
    scanf("%d",&N);
    x=N;
    for(i=1;N!=0;i++)
    {
        z=N%10;
        N=N/10;
        y=y+z*z*z;
    }
    if(y==x)
    {
        printf("Armstrong number is : %d",y);
    }
    else
    {
        printf("Not a Armstrong number");
    }
    getch();
}
