#include <stdio.h>

typedef struct {
    char name[20];
    int age;
} Person;

int main()
{
    int n = 23;
    float x = 45.75;
    double y = 128.5;
    char str[] = "Notre Dame";
    Person prsn = {"Pat", 19};
    
    // void pointer
    void *p;
    
    p = &n;
    printf("%d\n", *(int *)p);
    
    p = &x;
    printf("%f\n", *(float *)p);

    p = &y;
    printf("%lf\n", *(double *)p);

    p = str;
    printf("%s\n", (char *)p);

    // want pointer to point to my memory block for the struct of Person prsn i made
    p = &prsn; // address of Person prsn
  //printf("%s is %d years old\n", p->name, p->age); - this wont work :( - MUST TYPECAST
    printf("%s is %d years old\n", ((Person *)p)->name, ((Person *)p)->age);
    // need p to look like a Person pointer - not char * yet?
    // so we gotta make it safe to work with
    

    return 0;
}