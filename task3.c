/*-----------------------------------------*/
/*  ΕΡΓΑΣΙΑ ΕΞΑΜΗΝΟΥ Deadline: 23-12-2023  */
/*                ΑΣΚΗΣΗ 3.                */
/*           NICOLAOS TSITSONIS            */
/*-----------------------------------------*/

// Libraries declaration
#include <stdio.h>

// Function declaration
int ft_Task_3();

int main()
{
    ft_Task_3();

    return 0;
}

int ft_Task_3()
{
    float price, lowestPrice = 0;
    int stationNumber = 0, bestStation = 0;
    const int tankCapacity = 60;

    while (1)
    {
        printf("Enter price per liter for station %d (Enter (0) to EXIT): ", stationNumber + 1);
        scanf("%f", &price);

        if (price <= 0)
        {
            break;
        }

        if (lowestPrice == 0 || price < lowestPrice)
        {
            lowestPrice = price;
            bestStation = stationNumber;
        }

        stationNumber++;
    }

    if (lowestPrice > 0)
    {
        printf("The most favorable station is: %d with price per liter: %.2f\n", bestStation + 1, lowestPrice);
        printf("Total cost to fill up the tank: %.2f\n", lowestPrice * tankCapacity);
    }
    else
    {
        printf("No valid prices were entered.\n");
    }

    return 0;
}
