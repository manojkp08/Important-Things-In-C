#include <stdio.h>
#include <stdlib.h>

int main()
{
    char line[255];
    FILE * fpointer = fopen("legendary.txt", "r");

    fgets(line, 255, fpointer); /*This is for the first line*/
    fgets(line, 255, fpointer); /*And this is for the second line*/
    printf("%s", line);

    fclose(fopen);

    return 0;

}
