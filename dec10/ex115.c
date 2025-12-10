#include <stdio.h>

int main()
{
    int n = 23;
    float x = 45.75;
    double y = 128.5;
    
    // void pointer
    void *p;
    
    p = &n;
    
    // printf("%d\n", *p); - YOU CANT DO THIS; deferencing void pointer is invalid
    
    // typecast avg = (float) sum/count if its int sum and int count 
    // it doesnt change the type of sum, but it makes this the float version of sum

    // so youll have to typecast the void pointer
    printf("%d\n", *(int *)p);
    // *p is dereferencing but p is void
    // so we need to typecast p to become an integer pointer
    // so we'd do that with (int *)p
    // but then we'd need to deference THAT - so itll be *(int *)p
    // it doesnt change the pointer itself, but it makes p LOOK at 4 bytes - its the int pointer version of p

    // do for others

    p = &x;
    printf("%f\n", *(float *)p);

    p = &y;
    printf("%lf\n", *(double *)p);


    // you cannot dereference a void pointer
    // but you can make a void pointer look like an integer pointer
}