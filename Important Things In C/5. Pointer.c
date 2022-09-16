#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age = 18;
    int * pAge = &age;
    double gpa = 9.8;
    double * pGpa = &gpa;


/*
When we dereference a pointer, the it no longer be a pointer.
*/
    printf("age: %d\ngpa: %f", *pAge, *pGpa);

/*
Similar way for line number 15.
printf("age: %d\ngpa: %f", *&age, *&gpa);
*/

/*
printf("age; %d\ngpa: %f", &*&age, &*&gpa);
It will again print
age: 30
gpa: 9.8
*/

/*
printf("age; %d\ngpa: %f", *&*&age, *&*&gpa);
It will print the memory address
age: memory address
gpa: memory address
*/


    return 0;
}
