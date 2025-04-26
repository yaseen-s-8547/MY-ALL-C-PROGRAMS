/*
 ============================================================================
 Name        : str.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    setbuf(stdout, NULL);

    int row, space, star, limit;

    printf("Enter a limit: ");
    scanf("%d", &limit);

    for (row = 1; row <= limit; row++) {
        // Print leading spaces
        for (space = 1; space <= limit - row; space++) {
            printf("  "); // Two spaces for alignment
        }

        // Print stars with spaces
        for (star = 1; star <= row; star++) {
            printf("*");
            if (star < row) { // Add a single space between stars
                printf("   "); // Adjust spacing between stars
            }
        }

        printf("\n");
    }

    return 0;
}
