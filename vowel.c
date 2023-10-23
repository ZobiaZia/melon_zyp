#include <stdio.h>

int main()
{
    char n;
    printf("Enter a character.");
    scanf(" %c" ,&n);
    
    switch(n) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        printf("It is a vowel.");
        break;
        
        default:
        printf("It is not a vowel.");
    }

    return 0;
}
