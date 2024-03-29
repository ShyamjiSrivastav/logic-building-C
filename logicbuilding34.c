//Write a program to check whether a number - given be user  is prime or not
main()
{
    int a,i,j=0;
    printf("Enter a number : ");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        if(a%i==0)
        {
            j=j+1;
        }
    }
    if(j==2)
    {
        printf("%d is Prime Number",a);
    }
    else
    {
        printf("%d is Not a prime number",a);
    }
    getch();
}
