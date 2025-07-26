#include <stdio.h>

int main()
{
    int n, h;
    printf("Enter number of people in the room: ");
    scanf ("%d", &n);
    h = n * (n-1) / 2;
    printf ("\nNumber of Handshakes: %d\n", h);
    return 0;
}
