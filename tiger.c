#include<stdio.h>
main()
{
    int initial,rate,years;
    void tigers(int initial, int rate, int years);
    printf("Enter the population of Tigers in 2003\n");
    scanf("%d",&initial);

    printf("Enter the rate of growth of the population(in percentage)\n");
    scanf("%d",&rate);

    printf("Enter the year you want to check the population\n");
    scanf("%d",&years);
    tigers(initial,rate,years);


}

void tigers(int initial, int rate, int years)
{
    int c=2003, population=0;
    for(c=2003;c<=years;c++)
    {
        population=(initial*(100.0+rate)/100.0);
        initial=population;
        printf("population in %d = %d\n",c,population);
    }
}
