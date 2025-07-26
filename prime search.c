//write a modular c program to display all the prime numbers present in the array

void read(int a[50],int n);

void display(int a[50],int n);

int c;

int prime(int num);

main()
{

    int a[50],n,key;

    printf("enter number of element\n");
    scanf("%d",&n);

    read(a,n);
    display(a,n);

}

int prime(int a)
{
    int status=0,c=2;
    for(c=2;c<=a/2;c++)
    {
        if(a%c==0)
        {
            status=1;break;
        }
    }

    if(status==1)
        return(0);
    else
        return(1);
}

void display(int a[50], int n)
{
    printf("\n");

    for(c=0;c<n;c++)
        printf("on %d, the element was %d\n",c+1,a[c]);
}

void read(int a[50],int n)
{

    for(c=0;c<n;c++)
    {
        int status=0;
        printf("Enter the value of element %d\n",c);
        scanf("%d",&a[c]);
    }

    int sum=0;

    printf("All the prime numbers are\n");
    for(c=0;c<n;c++)
    {
        if(prime(a[c]))
        {
            printf("%d\t",a[c]);
            sum=sum+a[c];
        }

    printf("\n");
    }
    printf("Sum of all the prime numbers= %d",sum);

}
