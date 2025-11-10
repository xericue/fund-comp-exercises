#include <stdio.h>
#include <string.h>

int main()
{
    char str[30];
    // str = "notre dame"; // you cannot do this: str is a fixed address in memory
    // which you cant change

    // char *pt = "cse dept"; // pointer variable that points to string
    // or even
    char *pt = "cse dept"; // allowed bc. its a pointer
    // overall, str = "notre dame" isnt allowed because str is an array name
    // whereas pt = "cse dept" is allowed because pt is a pointer variable

    printf("%s\n", pt);
    printf("%c\n", *pt);

    pt = "whatever";
    // memory leak - cannot point to cse dept anymore because whatever is in a different location

    // --------------

    strcpy(str, "champions");
    printf("%s\n", str);

    char *p2;
    // strcpy(pt, "we will win the championship"); 
    // not allowed :(! creates a seg fault
    // 
    return 0;
}