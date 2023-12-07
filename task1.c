/*-----------------------------------------*/
/*  ΕΡΓΑΣΙΑ ΕΞΑΜΗΝΟΥ Deadline: 23-12-2023  */
/*                ΑΣΚΗΣΗ 1.                */
/*           NICOLAOS TSITSONIS            */
/*-----------------------------------------*/
// Libraries declaration
#include <stdio.h>
#include <string.h>

// Function declaration
int StampCollectorShopping();

int main()
{
    StampCollectorShopping();  // Managing the stamp collector's shopping spree

    return 0;
}

int StampCollectorShopping()
{
    const float budget = 1500.0;
    float price, spent = 0;
    char origin[10]; // Ensure the origin string is large enough
    int greekStamps = 0, foreignStamps = 0;

    while (spent < budget)
    {
        printf("Enter stamp price and origin (Greek/Foreign): ");
        scanf("%f %s", &price, origin);

        // If price exceeds remaining budget, end the purchases
        if (price > (budget - spent))
        {
            printf("END OF PURCHASES\n");
            break;
        }

        spent += price;

        // Comparing origin and incrementing respective counters
        if (strcmp(origin, "Greek") == 0)
        {
            greekStamps++;
        }
        else if (strcmp(origin, "Foreign") == 0)
        {
            foreignStamps++;
        }

        // Continues the loop until budget is exceeded
    }

    printf("Total amount spent: %.2f\n", spent);
    printf("Greek stamps: %d, Foreign stamps: %d\n", greekStamps, foreignStamps);

    // Check if there's remaining budget
    if (budget - spent > 0)
    {
        printf("Remaining amount: %.2f\n", budget - spent);
    }
    else
    {
        printf("ALL FUNDS EXHAUSTED\n");
    }

    return 0;
}
