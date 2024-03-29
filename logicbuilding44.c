//write a function to print all prime between given value a and b which is given by user
int prime(int);
void allprime(int,int);

int prime(int a)
{
    int i,j=0;
    for(i=1;i<=a;i++)
    {
        if(a%i==0)
        {
            j=j+1;
        }
    }
    if(j==2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void allprime(int b,int c)
{
    int i;
    for(i=b;i<=c;i++)
    {
        if(prime(i))
        {
            printf("%d ",i);
        }
    }
}

main()
{
    int d,e;
    printf("Enter two numbers");
    scanf("%d %d",&d,&e);
    allprime(d,e);
    getch();
}
