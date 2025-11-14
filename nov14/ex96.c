#include <stdio.h>

typedef struct {
    char name[20];
    int age;
} Student;

int main()
{
    Student st = {"Juan", 19};
    printf("%s is %d years old\n", st.name, st.age);

    Student *p;
    p = &st;

    // nooo you cant do p.name and (p++).age yet
    // data type of p is an address
    // data type of *p is struct
    // conceptually, *p.name should be correct!? it dereferences the pointer 
    // so u get the struct?

    // the operator '.' has higher priority than *
    // so doing *p.name looks like '*' to 'p.name' as opposed to '*p' to '.name'
    // so just use parentheses boa... (*p).name. force it to dereference first.

    printf("%s is %d years old\n", (*p).name, (*p).age);
    // syntactic sugar :3
    // "it's a cute little shortcut"
    printf("%s is %d years old\n", p->name, p->age);

    p-> age = 20;
    printf("%s will soon be %d years old", p-> name, p->age);

    printf("enter a new name and age: ");
    scanf("%s", p->name);
    scanf("%d", &p->age);
    printf("%s will at some point be %d years old\n", p->name, p->age);

    return 0;
}