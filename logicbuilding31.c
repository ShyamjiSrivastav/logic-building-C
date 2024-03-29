//print the LCM of the given numbers
main()
{
    int a,b,l;
    printf("Enter the first numbers : ");
    scanf("%d",&a);
    printf("Enter the second numbers : ");
    scanf("%d",&b);
    for(l=1;l<=a*b;l++)
    {
        if(l%a==0 && l%b==0)
        {
            printf("LCM is : %d",l);
            break;
        }
    }
    getch();

}
