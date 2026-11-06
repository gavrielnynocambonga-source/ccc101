#include "stdio.h"

 void main (){
    int gavriel, cambonga;

    printf("Enter an Integer: ");
    scanf("%i", &gavriel);
    
    while (gavriel >= 2)
    gavriel = gavriel - 2;


    if (gavriel == 0) printf (" %i is EVEN \n" , gavriel);

    else  printf (" %i is ODD\n" , gavriel);




}




