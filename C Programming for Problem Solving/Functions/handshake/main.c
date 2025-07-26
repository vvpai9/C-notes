//Handshake Problem
#include <stdio.h>

int hndshke (int);      //Function Declaration

int main()
{
    int n, h;
    printf("Enter number of people in the room: ");
    scanf ("%d", &n);
    h = hndshke (n);        //Function Call
    printf ("\nNumber of Handshakes: %d\n", h);
    return 0;
}

int hndshke (int n)     //Function Definition
{
    int hnd;
    hnd = n * (n-1) / 2;
    return hnd;
}
