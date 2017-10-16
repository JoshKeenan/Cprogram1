#include <stdio.h>

int main() {

    // Initialisation of variables by type
    int start;

    // Start block, output first menu and get user input
    printf("Hello, What would you like to do?\n");
    printf("1. Compute and Print the Bill for a Customer\n");
    printf("2. Show Sums and Statistics\n");
    printf("3. Quit the program\n\n");
    printf("Please enter your choice:");
    scanf("%i", &start);

    // Test user input and provide response

    if(start > 3 || start < 1){
        printf("That wasn't a valid response, do you want to try again?");

    }


    return 0;
}