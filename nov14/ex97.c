// RECURSION!!! THIS IS THE THIRD/MOST IMPORTANT

#include <stdio.h>
typedef struct {
    char name[20];
    int age;
} Student;

int main()
{
    Student students[] = {
        {"Juan", 19},
        {"Mary", 20},
        {"Pat", 19},
        {"Rawan", 18}
    };

    int size = sizeof(students) / sizeof(Student);
    printf("%d\n", size);

    for (int i = 0; i < size; i++) {
        printf("%s is %d years old\n", students[i].name, students[i].age);
    }

    printf("---\n");
    // new

    Student *p;
    p = students;
    for (int i = 0; i < size; i++) {
        printf("%s is %d years old\n", (*p).name, (*p).age);
        p++;
    }

    printf("---\n");

    p = students;
    for (int i = 0; i < size; i++) {
        printf("%s is %d years old\n", p->name, p->age);
        p++;
    }

    printf("---\n");
    // NEW WAY
    // now, we're not going to use any counter i at all.
    // instead of a counter, we need to advance p
    // local pointer to make this more versatile - we dont wanna declare anything
    
    // now p is students (not *p)
    // and now we have moved the declaration inside of the for loop
    //     int size = sizeof(students) / sizeof(Student);
    // students does not mutate (bc its an array). 
    // p moves. p + size would increase infinitely
    // why wouldnt it be EOF/!= NULL though
    
    for (Student *p = students; p < students + size; p++) {
        printf("%s is %d years old\n", p->name, p->age);
    }


    return 0;
}
