#include<stdio.h>
void app(int n,int a[]);
void read(int n,int a[]);
main()
{
  int a[100],n;
  printf("enter the number of applicants:\n");
  scanf("%d",&n);
  read(n,a);
  app(n,a);
  return 0;
}
void read(int n,int a[])
{
  int i;
  printf("enter the heights of the applicants:\n");
  for(i=0;i<n;i++)
    scanf("%d",&a[i]);
}
void app(int n,int a[])
{
    int i,count;
    for(i=0,count=0;i<n;i++)
    {
        if(a[i]>=165)
            count++;
    }
    printf("\nNumber of selected applicants: %d", count);
}