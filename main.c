/*
 * This program lets the user input as many numbers as he wants, then tells him or her how many unique numbers
 * were found.
 *
 * Author: Gerardo González Becerril.
 * E-mail: a01411981@itesm.mx
 * Date: October 14th, 2018.
 */

 // Library needed.
 #include <stdio.h>

 // This function adds values to the positions in a matrix.
void addValues(int n, int matrix[n][n]) {

    // For loop that has a for loop, each as many times as columns/ lines requested by the user.
    // For every number, it asks for an input to add.
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%ix%i: ", i+1, j+1);
            scanf("%i", &matrix[i][j]);
        }
    }

}

// This function prints a matrix.
void printMatrix(int n, int matrix[n][n]) {

    // For loop within a for loop, both as many times as the value of n, printing the current value.
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%i ", matrix[i][j]);
        }
        printf("\n");
    }
}

// This function works almost exactly as the 'printMatrix' function, but takes two values to sum while printing.
void printSum(int n, int matrix1[n][n], int matrix2[n][n]) {

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%i ", matrix1[i][j] + matrix2[i][j]);
        }
        printf("\n");
    }
}

int main() {

    int n; // Variable that stores the number of lines and columnes in a matrix.

    // Asks the user for an input. The while statement makes sure it's a number between 2 and 10.
    do {
        printf("What size would you like your matrices?\n");
        scanf("%d", &n);
    } while (n < 2 || n > 10);

    int matrix1[n][n]; // Array that fits the amount of numbers desired by the user.
    int matrix2[n][n];// Another array that fits the amount of numbers desired by the user.

    // Uses the 'addValues' function for each matrix.
    printf("Add values for the following places in matrix 1:\n");
    addValues(n, matrix1);
    printf("Add values for the following places in matrix 2:\n");
    addValues(n, matrix2);

    // Uses the 'printMatrix' and 'printSum' functions for each matrix.
    printf("\nMatrix 1:\n");
    printMatrix(n, matrix1);
    printf("\nMatrix 2:\n");
    printMatrix(n, matrix2);
    printf("\nMatrix 3:\n");
    printSum(n, matrix1, matrix2);

    return 0;
}