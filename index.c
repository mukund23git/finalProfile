//Write a program to convert a given integer to its one's complement                
//representation.
#include <stdio.h>
int onesComplement(int num) {
    int result = 0;
    int position = 1;

    while (num > 0) {

        result += !(num % 2) * position;
        position <<= 1; 
        num >>= 1;      
    }

    return result;
}

int main() {
    int user_input;

    printf("Enter an integer: ");
    scanf("%d", &user_input);

    int result = onesComplement(user_input);

    printf("One's complement representation: %d\n", result);

    return 0;
}