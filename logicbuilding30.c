//write a program to print the Armstrong number under 1000
main()
{
    int i,j,r,y=0,x;
    for(i=0;i<=1000;i++,y=0)
    {
        x=i;
        for(j=1;x!=0;j++)
        {
            r=x%10;
            x=x/10;
            y=y+r*r*r;
        }
        if(y==i)
        {
            printf("%d ",y);
        }
    }
    getch();
}
