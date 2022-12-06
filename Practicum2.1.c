#include <stdio.h>
#include "practicum1.h"



int main( void ) {
    int userInput;
    printf("kies een nummer: \n");
    scanf("%d", &userInput);
    printf("je hebt gekozen voor nummer: %d \n", userInput);
    if (userInput < 0) {
        return 0;
    }
    else {
        print_it();
    }
}