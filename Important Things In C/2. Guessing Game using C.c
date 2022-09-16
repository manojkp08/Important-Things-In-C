#include <stdio.h>
#include <stdlib.h>


int main()
{
    int secretnumber = 5;
    int guess;
    int guessCount = 0;
    int guessLimit = 3;
    int Outofguess = 0;


    while (guess != secretnumber && Outofguess == 0){
        if (guessCount < guessLimit){
            printf("Enter the number: ");
            scanf("%d", &guess);
            guessCount++ ;

        }else{
            Outofguess = 1;
        }
    }
    if (Outofguess == 1){
        printf("Out Of Guesses");
    }else{
        printf("You Win");
    }

    return 0;
}
