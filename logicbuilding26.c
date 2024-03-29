//write a program to calculate the sum of the digits of a given number
main()
{
    int N,i,z,sum=0;
    printf("Enter a number : ");
    scanf("%d",&N);
    for(i=1;N!=0;i++)
    {
        z=N%10;
        N=N/10;
        sum=sum+z;
    }
    printf("Sum of the digits in the number : %d",sum);
    getch();
}
