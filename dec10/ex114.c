#include <stdio.h>

int main()
{
    int n = 23;
    float x = 45.75;
    double y = 128.5;
    
    int *p;
    float *p2;
    double *p3;

    p = &n;
    p2 = &x;
    p3 = &y;

    printf("%d\n", *p);
    printf("%f\n", *p2);
    printf("%lf\n", *p3);
    

    // you cannot dereference a void pointer
    // but you can make a void pointer look like an integer pointer
}