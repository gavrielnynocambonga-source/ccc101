
#include "stdio.h"

int main() {
    int gavriel;
    float cambonga;

    printf("Enter an integer: ");
    scanf("%d", &gavriel);

    printf("Enter a real number: ");
    scanf("%f", &cambonga);

    if (gavriel > 0) {
        printf("Integer is POSITIVE\n");
    }
    else if (gavriel < 0) {
        printf("Integer is NEGATIVE\n");
    }
    else {
        printf("Integer is NEUTRAL\n");
    }

    
    if (cambonga > 0) {
        printf("Float is POSITIVE\n");
    }
    else if (cambonga < 0) {
        printf("Float is NEGATIVE\n");
    }
    else {
        printf("Float is NEUTRAL\n");
    }

    return 0;
}
