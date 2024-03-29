//print the HCF of the given two given numbers
main()
{
    int a,b,h;
    printf("Enter the first number :");
    scanf("%d",&a);
    printf("Enter the second number :");
    scanf("%d",&b);
    for(h=a;h!=1;h--)
    {
        if(a%h==0 && b%h==0)
        {
            printf("HCF is : %d",h);
        }
    }
    getch();
}
