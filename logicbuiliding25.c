//write a program to count the number of digits in the number given by the user
main()
{
    int N,i;
    printf("Enter a number : ");
    scanf("%d",&N);
    for(i=1;N!=0;i++)
    {
        N=N/10;
    }
    printf("Number of digits in a number : %d",i-1);
    getch();
}
