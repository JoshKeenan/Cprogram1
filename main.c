#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    // Initialisation of variables by type
    int billCalc, start, quit, resCom, standing;
    float total, waterCharge, waste, surface;

    while (quit != 1) {
        // Test user input and provide response
        while (start != 0) {
            // Output first menu and get user input
            printf("Hello, What would you like to do?\n");
            printf("1. Compute and Print the Bill for a Customer\n");
            printf("2. Show Sums and Statistics\n");
            printf("3. Quit the program\n\n");
            printf("Please enter your choice:");
            scanf("%i", &start);

            if (start == 1) {

                printf("Please enter your water consumption:");
                scanf("%i", &billCalc);
                while (resCom < 1 || resCom > 2) {
                    printf("What type of customer are you?\n1. Residential\n2. Commercial\nPlease enter your response:");
                    scanf("%i", &resCom);
                }
                if (resCom == 1) {
                    if (billCalc <= 5)
                        waterCharge = (billCalc * 0.20);

                    else if (billCalc > 5 && billCalc <= 12)
                        waterCharge = ((billCalc - 5.00) * 0.35) + 1;

                    else if (billCalc > 12 && billCalc <= 25)
                        waterCharge = ((billCalc - 12.00) * 0.50) + 3.45;

                    else if (billCalc > 25 && billCalc <= 40)
                        waterCharge = ((billCalc - 25) * 0.75) + 9.95;

                    else
                        waterCharge = ((billCalc - 40) * 2.5) + 21.2;

                    standing = 10;
                    surface = (91 * 0.1);
                    waste = (0.95 * billCalc) * 0.25;
                    total = waterCharge + waste + standing + surface;
                    printf("\nCustomer type: Residential\n");
                    printf("VAT: %i\n", 0);
                }

                else if (resCom == 2){
                    standing = 50;
                    surface = 1.30 * 91.0;
                    waste = (0.95 * billCalc) * 2;
                    waterCharge = (billCalc * 2.5);
                    total = waterCharge + waste + standing + surface;
                    total = total + (total * 0.2);
                    printf("\nCustomer type: Commercial\n");
                    printf("VAT: %f\n", (total * 0.2));
                }

                printf("Water consumption: %i\n", billCalc);
                printf("Waste water charge: %f\n", 0.95 * waterCharge);
                printf("Surface water charge: %i\n", 10);
                printf("Standing charge: %i\n", standing);
                printf("Water charge: %f\n", waterCharge);
                printf("Total cost: %f\n", total);
                resCom = 0;
                printf("\n\n---------------------------------\n\n");

            }
            else if (start == 2) {
                printf("2 was your choice\n");
                printf("\n\n---------------------------------\n\n");
            }


            else if (start == 3) {
                printf("End of program..\n");
                start = 0;
                quit = 1;
            }
        }
    }
    return 0;
}
