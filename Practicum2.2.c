#include <stdio.h>


float omtrek( float *diameter );
int main( void ){
    float diameter;
    printf("Vul de diameter in: "); 
    scanf("%f", &diameter);
    float area;
    float *pointer = &diameter;
    area = omtrek(pointer);

    printf("De omtrek is: %f\n", area);
}


float omtrek ( float *diameter ) {
    float area;
    float pi = 3.14;
    area = pi * *diameter;
    
    return area;
}