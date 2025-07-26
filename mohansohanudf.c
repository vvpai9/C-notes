#include<stdio.h>
#include<math.h>
main()
{
    float x1,y1,x2,y2;
    void dist(float x1,float y1, float x2, float y2);
    printf("Enter the co-ordinates of Mohan\n");
    scanf("%f%f",&x1,&y1);

    printf("Enter the co-ordinates of Sohan\n");
    scanf("%f%f",&x2,&y2);

    dist(x1,y1,x2,y2);
}

void dist(float x1,float y1,float x2, float y2)
{
    float distance,time;
    distance= sqrt(pow((x2-x1),2)+pow((y2-y1),2));
    time=distance/2;
    printf("time taken by Mohan to reach Sohan=%f",time);
}
