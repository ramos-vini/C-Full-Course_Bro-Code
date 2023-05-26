#include <stdio.h>

typedef struct
{
    char name[15];
    float gpa;    
} Student;

int main()
{
    Student student1 = {"Spongebob", 3.0};
    Student student2 = {"Patrick", 2.0};
    Student student3= {"Sandy", 4.0};
    Student student4 = {"Squidward", 1.5};

    Student students[] = {student1, student2, student3, student4};

    for (int i = 0; i < sizeof(students)/sizeof(students[0]); i++)
    {
        printf("%-12s %.1f\n", students[i].name, students[i].gpa);
    }

    return 0;
}