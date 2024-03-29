// Write a recursive function to calculate the x power y
float power(float x,float y)
{
    float prod;
    if(y==0)
    {
        return 1;
    }
    else
    {
        if(y>0)
        {
            prod=x*power(x,y-1);

        }
        else
        {
           prod=1/x*power(x,y+1);

        }
        return prod;
    }
}

main()
{
    float x,y,k;
    printf("Enter the number that you want to take power of : ");
    scanf("%f",&x);
    printf("Enter the number how much times you want power : ");
    scanf("%f",&y);
    k=power(x,y);
    printf("x to the power y is %f",k);
    getch();
}
