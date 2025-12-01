#include <stdio.h>

int fact_loop(int);
int fact_rec(int);

int main()
{
    int n;
    printf("enter n: ");
    scanf("%d", &n);

    int f1 = fact_loop(n);
    printf("factorial (loop) of %d is %d\n", n, f1);
    int f2 = fact_rec(n);
    printf("factorial (rec) of %d is %d\n", n, f2);
    return 0;
}

int fact_loop(int n) {
    int f = 1;
    for (int i = n; i >= 1; i--) {
        f *= i;
    }
    return f;
}

int fact_rec(int n)
{
    int f;
    if (n == 1) 
        f = 1;
    else {
        f = n * fact_rec(n - 1);
    }

    return f;
}