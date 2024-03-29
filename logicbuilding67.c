//Write a program to rotate an array elements by n position towards right
main()
{
    int a[]={2,5,6,10,12},i,n,k;
    printf("Enter a number n here :");
    scanf("%d",&n);
    while(n--)
    {
        k=a[4];
        for(i=4;i>0;i--)
        {
            a[i]=a[i-1];
        }
        a[0]=k;
    }
    for(i=0;i<5;i++)
    {
        printf("%d ",a[i]);
    }
    getch();
}
