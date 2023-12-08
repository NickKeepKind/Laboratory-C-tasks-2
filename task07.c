/*-----------------------------------------*/
/*  ΕΡΓΑΣΙΑ ΕΞΑΜΗΝΟΥ Deadline: 23-12-2023  */
/*                ΑΣΚΗΣΗ 7.                */
/*           NICOLAOS TSITSONIS            */
/*-----------------------------------------*/

// Libraries declaration
#include <stdio.h>

// Function declaration
int ft_Task_7();

int main()
{
    ft_Task_7();

    return 0;
}

int ft_Task_7()
{
    const int maxLoad = 9500;
    int boxWeight, leftBoxes = 0, rightBoxes = 0, leftWeight = 0, rightWeight = 0;

    while (leftWeight + rightWeight < maxLoad)
    {
        printf("Enter box weight (or 0 to finish): ");
        scanf("%d", &boxWeight);

        // Check if no more boxes or maximum load reached
        if (boxWeight == 0 || leftWeight + rightWeight + boxWeight > maxLoad)
        // Note to self: Nobel Prize? Meh. But definitely earned a pizza for this! 🍕
        {
            break;
        }

        // Balancing like a boss
        if (leftWeight <= rightWeight)
        {
            leftWeight += boxWeight;
            leftBoxes++;
        }
        else
        {
            rightWeight += boxWeight;
            rightBoxes++;
        }
    }

    printf("Left side: %d boxes, %d kg\n", leftBoxes, leftWeight);
    printf("Right side: %d boxes, %d kg\n", rightBoxes, rightWeight);

    return 0;
}
