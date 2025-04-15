#include <stdio.h>
#include <stdlib.h> // for strtol()

// Function for hex addition
void hex_add(const char *h1, const char *h2) {
    int n1 = (int)strtol(h1, NULL, 16);
    int n2 = (int)strtol(h2, NULL, 16);
    int result = n1 + n2;
    printf("Hex Sum = %X\n", result);
}

int main() {
    char hex1[20], hex2[20];
    
    printf("Enter first hex number (e.g., A): ");
    scanf("%s", hex1);
    printf("Enter second hex number: ");
    scanf("%s", hex2);

    hex_add(hex1, hex2);
    return 0;
}
