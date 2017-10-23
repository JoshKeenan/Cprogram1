#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    // Initialisation of variables by type
    int start;
    float billCalc, total;

    // Test user input and provide response
    while (start > 3 || start < 1) {
        // Output first menu and get user input
        printf("Hello, What would you like to do?\n");
        printf("1. Compute and Print the Bill for a Customer\n");
        printf("2. Show Sums and Statistics\n");
        printf("3. Quit the program\n\n");
        printf("Please enter your choice:");
        scanf("%i", &start);
    }

    if (start == 1){
        printf("Please enter your bill:");
        scanf("%f", &billCalc);

        if (billCalc <= 5.49){
            total = billCalc * 0.20;
        }
        else if (billCalc > 5.49 && billCalc <= 12.49){
            total = ((billCalc - 5.49) * 0.35) + (5.49 * 0.2);
        }
        else if (billCalc > 12.49 && billCalc <= 25.49){
            total = ((billCalc - 12.49) * 0.5) + ((billCalc - 5.49) * 0.35) + (5.49 * 0.2);
        }

        printf("%f", total);

    }

    else if(start == 2)
        printf("2 was your choice");
    else if(start == 3) {
        printf("End of program..");
        exit(0);
    }


    return 0;
}