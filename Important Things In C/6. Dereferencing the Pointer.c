#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE * fpointer = fopen("legendary.txt", "w");


    fclose(fpointer);
    return 0;
}
