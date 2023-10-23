#include <stdio.h>

void intToRoman(int num) {
    if (num <= 0 || num >= 4000) {
        printf("Invalid input. Please enter a number between 1 and 3999.\n");
        return;
    }

    char* romanNumerals[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};

    printf("Roman numeral representation: ");
    int i;
    for (i = 0; i < 13; i++) {
        while (num >= values[i]) {
            printf("%s", romanNumerals[i]);
            num -= values[i];
        }
    }

    printf("\n");
}

int main() {
    int num;
    printf("Enter an integer (1-3999): ");
    scanf("%d", &num);
    
    intToRoman(num);

    return 0;
}
