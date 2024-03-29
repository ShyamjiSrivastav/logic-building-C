//Write a program to find the greatest element in an array
main()
{
    int a[]={20,30,60,40,10},max,i,k;
    max=a[0];
    for(i=0;i<5;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
            k=i;
        }
    }
    printf("The greatest value is %d\n",max);
    printf("The index of the greatest value is %d",k);
    getch();
}
