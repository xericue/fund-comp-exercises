#include <stdio.h>

void func(int);

int main()
{
    // pros of an array are that you can access any element. index-typed data structure

    // other data structures
    // STACK!!! (you have to create this yourself in C)
        // put things on top - last in is first out (pancakes, LIFO)
        // lifo is also how functions get implemented - calling a function is like adding pancakes
        // like recursion... heheheh...

    // QUEUE!!! first in is first out (supermarket line, FIFO)

    // what happens in recursion?
        // a copy of func gets pushed to the stack
            // if no base case: go "to the point right after the call to func in the last copy"
                // i.e. each copy of func has to get released first before the previous.
                // LIFO. backtracing of recursion.
    int n = 1;

    func(n);

    return 0;
}

void func(int n) {
    if (n > 10) return;
    printf("hello %d\n", n);
    func(n + 1); // modified parameter at the call
}