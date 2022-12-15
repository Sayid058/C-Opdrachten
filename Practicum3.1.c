//Practicum3.1
//Naam: Sayid Abd-Elaziz, ITV2G
#include <stdio.h>

void maxArrays(float * array1, float * array2, float * array3) {
    int i;
    int n = 3;
    
    for (i = 0; i <= n; i++) {  
        if (array1[i] >= array2[i]) {
            array3[i] = array1[i];
        }
        else {
            array3[i] = array2[i];
        }
    }
}

int main() {
    float arr1[4] = {0.7, 3.3, 0.5, 10.3};
    float arr2[4] = {4.1, 1.5, 0.5, 2.3};
    float arr3[4];

    float *P_arr1;
    float *P_arr2; 
    float *P_arr3;

    P_arr1 = &arr1[0]; // pointer naar array 1
    P_arr2 = &arr2[0]; // pointer naar array 2
    P_arr3 = &arr3[0]; // pointer naar array 3
    
    printf("Array 1: "); 
    for (int i = 0; i <= 3; i++) { // inhoud van array 1
        printf("%f ", arr1[i]);
    }
    printf("\nArray 2: ");
    for (int i = 0; i <= 3; i++) { // inhoud van array 2
        printf("%f ", arr2[i]);
    }    
    printf("\n");

    maxArrays(P_arr1, P_arr2, P_arr3);

    printf("\nArray 3: ");
    for (int i = 0; i <= 3; i++) { // inhoud van array 3
        printf("%f ", arr3[i]);
    }        
    
    return 0;
}