#include <stdio.h>

int main()
{
    int n = 23;
    float x = 45.75;
    double y = 128.5;
    char str[] = "Notre Dame";
    
    // void pointer
    void *p;
    
    p = &n;
    printf("%d\n", *(int *)p);
    
    p = &x;
    printf("%f\n", *(float *)p);

    p = &y;
    printf("%lf\n", *(double *)p);

    // how can we use str and the void pointer to print the str
    p = str;
    printf("%s\n", (char *)p);

    // "gcc ex116.c -Wall" <- this gives ALL warnings (W...arning all)
    // you cannot dereference a void pointer
    // but you can make a void pointer look like an integer pointer
    return 0;
}