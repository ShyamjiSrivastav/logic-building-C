//write a program to reverse a number - method 1
main()
{
    int N,i,z;
    printf("Enter a number : ");
    scanf("%d",&N);
    printf("Reverse of given number : ");
    for(i=1;N!=0;i++)
    {
        z=N%10;
        N=N/10;
        printf("%d",z);
    }
    getch();
}
