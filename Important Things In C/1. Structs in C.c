#include <stdio.h>
#include <stdlib.h>

struct Student
{
    char Name[50];
    char Major[50];
    int age;
    double GPA;
};

int main()
{
    struct Student student1;
    student1.age = 19;
    student1.GPA = 9.8;
    strcpy(student1.Name, "Manoj Kumar");
    strcpy(student1.Major, "Comuter Science");

    printf("%s", student1.Major);


    return 0;
}
