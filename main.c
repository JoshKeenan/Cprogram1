#include <stdio.h>

int main() {

    // Initialisation of variables by type
    int billCalc, start, quit, resCom, standing, totalWaterConsum, domesticConsum, count;
    float total, waterCharge, waste, surface, totalVat, revenue, profit, totalConBill, biggestBill;

    while (quit != 1) {
        // Test user input and provide response

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
                domesticConsum = domesticConsum + billCalc;
                printf("\nTotal cost: £%.2f\n", total);
                printf("Customer type: Residential\n");
                printf("VAT: £%i\n", 0);
                count = count + 1;
                totalConBill = totalConBill + total;

                if (total > biggestBill)
                    biggestBill = total;

            }

            else if (resCom == 2){
                standing = 50;
                surface = 1.30 * 91.0;
                waste = (0.95 * billCalc) * 2;
                waterCharge = (billCalc * 2.5);
                total = waterCharge + waste + standing + surface;
                totalVat = total + (total * 0.2);
                printf("Total cost: £%.2f\n", totalVat);
                printf("\nCustomer type: Commercial\n");
                printf("VAT: £%.2f\n", (total * 0.2));
            }

            printf("Water consumption: %im3\n", billCalc);
            printf("Waste water charge: £%.2f\n", 0.95 * waterCharge);
            printf("Surface water charge: £%i\n", 10);
            printf("Standing charge: £%i\n", standing);
            printf("Water charge: £%.2f\n", waterCharge);

            revenue = revenue + total;
            totalWaterConsum = totalWaterConsum + billCalc;
            resCom = 0;
            printf("\n---------------------------------\n\n");
        }

        else if (start == 2) {
            profit = revenue - totalWaterConsum;
            printf("Total water consumption: %im3\n", totalWaterConsum);
            printf("Total domestic water consumption: %im3\n", domesticConsum);
            printf("Total revenue: £%.2f\n", revenue);
            printf("Total cost: £%i\n", totalWaterConsum); // £1 per m3 of water consumed, therefore same number
            printf("Total profit: £%.2f\n", profit);
            printf("Total income tax: £%.2f\n", profit * 0.25);
            printf("Total domestic bill: %.2f\n", totalConBill/count);
            printf("Biggest domestic bill: %.2f\n", biggestBill);
            printf("\n\n---------------------------------\n\n");
        }

        else if (start == 3) {
            printf("End of program..\n");
            quit = 1;
        }
    }
    return 0;
}
