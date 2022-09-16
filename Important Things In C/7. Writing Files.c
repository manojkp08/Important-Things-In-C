#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE * fpointer = fopen("legendary.txt", "w");
    /*
    FILE * fpointer = fopen("legendary.txt", "a");
    fprintf(fpointer, "\nRakesh , Customer Support");
    # By using append, it actually adds more data rather than overriding the existing data.*/

    fprintf(fpointer, "Jim, Salesman\nPam , Manager\nRaghu , Boss");

    fclose(fopen);

    return 0;

}
