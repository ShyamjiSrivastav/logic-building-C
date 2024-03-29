//Write a function to print the sum of array elements
int sumarr(int A[],int size)
{
    int i,s=0;
    for(i=0;i<size;i++)
    {
        s=s+A[i];
    }
    return s;
}

main()
{
    int a[]={10,20,30,40,50},k;
    k=sumarr(a,5);
    printf("The sum is %d",k);
    getch();
}

