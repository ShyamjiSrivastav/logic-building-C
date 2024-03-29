//write a program to calculate X power Y, where x and y taken as input by user.
main()
{
    int x,y,i,z=1;
    printf("Enter the number : ");
    scanf("%d",&x);
    printf("Enter the power on that number : ");
    scanf("%d",&y);
    for(i=1;i<=y;i++)
    {
        z=z*x;
    }
    printf("%d ",z);
    getch();
}
