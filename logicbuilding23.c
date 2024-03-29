//Write a program to print the sum of first N odd natural numbers
main()
{
    int N,i,sum=0;
    printf("Enter a numbers : ");
    scanf("%d",&N);
    for(i=1;i<=2*N;i++)
    {
        if(i%2)
        {
            sum=sum+i;
        }
    }
    printf("%d ",sum);
    getch();
}
