//Write a function to rotate an array elements by one position towards right
main()
{
    int a[]={2,5,6,10,12},i;
    for(i=0;i<5;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    rotatearr(a,5);
    for(i=0;i<5;i++)
    {
        printf("%d ",a[i]);
    }
    getch();
}

void rotatearr(int A[],int size)
{
    int i,k;
    k=A[size-1];
    for(i=size-1;i>0;i--)
    {
        A[i]=A[i-1];
    }
    A[0]=k;
}
