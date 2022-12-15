//Practicum3.3
//Naam: Sayid Abd-Elaziz, ITV2G

#include <stdio.h>
#define MAX 3

struct opleiding { 
    char naam[45];
    int instroomjaar;
};

struct student { 
    char naam[20];
    int leeftijd;
    struct opleiding opleiding;
} data[MAX];


int main (void) {
    struct student *s;
    int count; 
    int i; 

    printf("3 namen (gesplits door een spatie): \n");
    scanf("%s %s %s", data[0].naam, data[1].naam, data[2].naam);

    for (i=0; i<MAX; i++) {  
        printf("\nleeftijd van %s: ", data[i].naam);
        scanf("%d", &data[i].leeftijd);

        printf("\nOpleiding van %s: ", data[i].naam);
        scanf("%s", data[i].opleiding.naam);

        printf("\nInstroomjaar van %s op %s: ", data[i].naam, data[i].opleiding.naam);
        scanf("%d", &data[i].opleiding.instroomjaar);
    }

    s = data;

    for (count = 0; count < MAX; count++) 
    { 
        printf("Element %d: Naam: %s, leeftijd: %d, opleiding: %s, instroomjaar: %d\n",
            count, 
            s->naam,
            s->leeftijd,
            s->opleiding.naam,
            s->opleiding.instroomjaar);
            s++; 
    }
    
    
    return 0;
}