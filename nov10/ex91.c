#include <stdio.h>

int main()
{
    char str[] = "notre dame";
    char *pt = "cse dept";
    // char* means string

    display1(str); // array to array
    display2(pt); // pointer to pointer

    display1(pt); // pointer to array
    display2(str); // array to pointer

    // accept that it doesnt matter whether we declare a char array or pointer
    // when passing to a function, both are treated as pointers

    return 0;    
}

void display(char s[]) {
    printf("%s\n", s);
}

void display2(char *p) {
    printf("%s\n", p); // takes in a POINTER that points toa  string
    // remember that %s is an address, not a value; everything else requires a value
}