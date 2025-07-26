#include <stdio.h>
#include <math.h>

int fact (int n) {
    int i;
    float f;
    for (i = f = 1; i <= n; i++)
        f = f * i;
    return f;
}

double sine (double d, int n) {
    double s;
    int i, j, sign;
    d = d * (3.1415/180);
    for (i = j = sign = 1, s = 0; i <= n; i++, sign = sign * -1, j = j + 2)
        s = s + ((pow (d, j)) / (float) fact (j)) * sign;
    return s;
}

int main() {
    double d;
    int n;
    scanf ("%lf%d", &d, &n);
    if (d >= 0 && d < 360 && n >= 1 && n < 100)
        printf ("Sine value of %.3f is: %.3lf", d, sine (d, n));
    else
        printf ("Invalid input.");
    return 0;
}
