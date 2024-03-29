//Write a function to print the index of greatest value element in an array
int greatindex(int A[],int size)
{
    int max,i,k;
    max=A[0];
    for(i=1;i<size;i++)
    {
        if(A[i]>max)
        {
            max=A[i];
            k=i;
        }
    }
    return k;
}

main()
{
    int a[]={10,30,20,50,40,60,100,70,80,90},l;
    l=greatindex(a,10);
    printf("The index of greatest value element is : %d",l);
    getch();
}
