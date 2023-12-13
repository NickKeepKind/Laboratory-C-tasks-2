/*-----------------------------------------*/
/*  ΕΡΓΑΣΙΑ ΕΞΑΜΗΝΟΥ Deadline: 23-12-2023  */
/*               ΑΣΚΗΣΗ 10.                */
/*           NICOLAOS TSITSONIS            */
/*-----------------------------------------*/

// Libraries declaration
#include <stdio.h>
#include <string.h>

// Function declaration
int ft_Task_10();

int main()
{
    ft_Task_10();

    return 0;
}

int ft_Task_10()
{
    const int budget = 1500;
    int spent = 0, greekStamps = 0, foreignStamps = 0;
    float stampPrice;
    char origin[20];

    while (spent < budget)
    {
        printf("Enter origin of the stamp (Greek / any foreign): ");
        scanf("%s", &origin);
        printf("Enter stamp price: ");
        scanf("%f", &stampPrice);

        if (spent + stampPrice > budget)
        {
            printf("END OF PURCHASES\n");
            break;
        }

        spent += stampPrice;

        // Counting the number of Greek and foreign stamps
        if (strcmp(origin, "Greek") == 0)
        {
            greekStamps++;
        }
        else
        {
            foreignStamps++;
        }
    }

    printf("Total amount spent: %d euros\n", spent);
    printf("Number of Greek stamps: %d,\nForeign stamps: %d\n", greekStamps, foreignStamps);

    if (spent < budget)
    {
        printf("Remaining amount: %d euros\n", budget - spent);
    }
    else
    {
        printf("THE ENTIRE AMOUNT WAS EXHAUSTED\n");
    }

    return 0;
}
