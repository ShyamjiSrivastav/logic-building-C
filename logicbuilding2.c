//Write a program to print the greatest number among the three number

main()
{
    int a,b,c;
    printf("Enter three values");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b)
        if(a>c)
            printf("%d",a);
        else
            printf("%d",c);
    else
        if(b>c)
            printf("%d",b);
        else
            printf("%d",c);

    getch();
}
