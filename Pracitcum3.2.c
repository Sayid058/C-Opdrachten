//Practicum3.2
//Naam: Sayid Abd-Elaziz, ITV2G
#include <stdio.h>

int zinLengte(char zin[]) {
    int length;
    for (length=0; zin[length] != '\0'; ++length);

    return length;
}

int main() {
    char zin[254];
    printf("Geef een zin: "); 
    scanf("%[^\n]s", zin); 

    int lengte = zinLengte(zin);
    printf("De lengte van de zin is: %d", lengte);
}