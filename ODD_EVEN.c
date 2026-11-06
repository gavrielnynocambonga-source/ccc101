#include "stdio.h"

 void main (){
    int gavriel, cambonga;

    printf("Enter an Integer: ");
    scanf("%i", &gavriel);
    
    cambonga = gavriel;
    for (int x = 1;x <=cambonga /2; x++)
    gavriel = gavriel - 2;

    if (gavriel == 0) printf (" %i is EVEN \n" , cambonga);

    else  printf (" %i is ODD\n" ,cambonga);




}




