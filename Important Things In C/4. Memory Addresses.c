#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age = 18;
    int * pAge = &age;
    double gpa = 9.8;
    double * pGpa = &gpa;

    printf("age: %p\ngpa: %p", pAge, pGpa);


    return 0;

}
