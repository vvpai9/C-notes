#include <stdio.h>
main()
{
    float len,wid,rad;
    void grass_cutting(float len,float wid,float rad);
    printf("enter length and width of lawn\n");
    scanf("%f%f",&len,&wid);
    printf("enter radius of hut\n");
    scanf("%f",&rad);
    grass_cutting(len,wid,rad);
}

void grass_cutting(float len,float wid,float rad)
{
    float lawn_area,hut_area,grass_area,time;
    lawn_area=len*wid;
    hut_area=3.142*pow(rad,2);
    grass_area=lawn_area-hut_area;
    time=grass_area/2;
    // time= (len*wid-(3.142*pow(rad,2)))/2
    printf("time needed to cut the grass=%f\n",time);
}
