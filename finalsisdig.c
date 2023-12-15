#include <stdio.h>
#include <stdlib.h>

void Biner(int angka) {
    char biner[10][5] = {
        "0000", // 0
        "0001", // 1
        "0010", // 2
        "0011", // 3
        "0100", // 4
        "0101", // 5
        "0110", // 6
        "0111", // 7
        "1000", // 8
        "1001"  // 9
    };

    printf("\nbiner dari %d adalah: %s\n", angka, biner[angka]);
}

void SevenSegment(int angka) {
    int segments[10][7] = {
        {1, 1, 1, 1, 1, 1, 0}, // 0
        {0, 1, 1, 0, 0, 0, 0}, // 1
        {1, 1, 0, 1, 1, 0, 1}, // 2
        {1, 1, 1, 1, 0, 0, 1}, // 3
        {0, 1, 1, 0, 0, 1, 1}, // 4
        {1, 0, 1, 1, 0, 1, 1}, // 5
        {1, 0, 1, 1, 1, 1, 1}, // 6
        {1, 1, 1, 0, 0, 0, 0}, // 7
        {1, 1, 1, 1, 1, 1, 1}, // 8
        {1, 1, 1, 1, 0, 1, 1}  // 9
    };

    

    printf("\nSeven Segment Display dari %d:\n", angka);
     
    printf("A: %d, B: %d, C: %d, D: %d, E: %d, F: %d, G: %d\n\n",
           segments[angka][0], segments[angka][1], segments[angka][2],
           segments[angka][3], segments[angka][4], segments[angka][5],
           segments[angka][6]);
          
}
void displayNumber(int angka) {
    switch (angka) {
        case 0:
            printf(" ==A== \n");
            printf("|     |\n");
            printf("F     B\n");
            printf("|     |\n");
            printf("       \n");
            printf("|     |\n");
            printf("E     C\n");
            printf("|     |\n");
            printf(" ==D== \n");
            break;
        case 1:
            printf("       \n");
            printf("      |\n");
            printf("      B\n");
            printf("      |\n");
            printf("       \n");
            printf("      |\n");
            printf("      C\n");
            printf("      |\n");
            printf("       \n");
            break;
        case 2:
            printf(" ==A== \n");
            printf("      |\n");
            printf("      B\n");
            printf("      |\n");
            printf(" ==G== \n");
            printf("|      \n");
            printf("E      \n");
            printf("|      \n");
            printf(" ==D== \n");
            break;
        case 3:
            printf(" ==A== \n");
            printf("      |\n");
            printf("      B\n");
            printf("      |\n");
            printf(" ==G== \n");
            printf("      |\n");
            printf("      C\n");
            printf("      |\n");
            printf(" ==D== \n");
            break;
        case 4:
            printf("       \n");
            printf("|     |\n");
            printf("F     B\n");
            printf("|     |\n");
            printf(" ==G== \n");
            printf("      |\n");
            printf("      C\n");
            printf("      |\n");
            printf("       \n");
            break;
        case 5:
            printf(" ==A== \n");
            printf("|      \n");
            printf("F      \n");
            printf("|      \n");
            printf(" ==G== \n");
            printf("      |\n");
            printf("      C\n");
            printf("      |\n");
            printf(" ==D== \n");
            break;
        case 6:
            printf(" ==A== \n");
            printf("|      \n");
            printf("F      \n");
            printf("|      \n");
            printf(" ==G== \n");
            printf("|     |\n");
            printf("E     C\n");
            printf("|     |\n");
            printf(" ==D== \n");
            break;
        case 7:
            printf(" ==A== \n");
            printf("      |\n");
            printf("      B\n");
            printf("      |\n");
            printf("       \n");
            printf("      |\n");
            printf("      C\n");
            printf("      |\n");
            printf("       \n");
            break;
        case 8:
            printf(" ==A== \n");
            printf("|     |\n");
            printf("F     B\n");
            printf("|     |\n");
            printf(" ==G== \n");
            printf("|     |\n");
            printf("E     C\n");
            printf("|     |\n");
            printf(" ==D== \n");
            break;
        case 9:
            printf(" ==A== \n");
            printf("|     |\n");
            printf("F     B\n");
            printf("|     |\n");
            printf(" ==G== \n");
            printf("      |\n");
            printf("      C\n");
            printf("      |\n");
            printf(" ==D== \n");
            break;
    }}

int main() {
    int input;

    // Memasukkan input dari pengguna
    printf("Masukkan angka (0-9): ");
    scanf("%d", &input);
    if (input < 0 || input > 9) {
        printf("input tidak valid. masukkan angka (0-9).\n");
    }
    else
   { // Memanggil fungsi untuk menampilkan konversi ke binary
    Biner(input);

    // Memanggil fungsi untuk menampilkan Seven Segment Display dan nilai A hingga G
    SevenSegment(input);
    displayNumber(input);
    return 0;
    }

    

    return 0;
}
