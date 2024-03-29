//print the all factors of the number given by the user
main()
{
    int a,i;
    printf("Enter the number :");
    scanf("%d",&a);
    printf("Factors are :");
    for(i=1;i<=a;i++)
    {
        if(a%i==0)
        {
            printf("%d ",i);
        }
    }
    getch();
}
