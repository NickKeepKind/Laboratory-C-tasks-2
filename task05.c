/*-----------------------------------------*/
/*  ΕΡΓΑΣΙΑ ΕΞΑΜΗΝΟΥ Deadline: 23-12-2023  */
/*                ΑΣΚΗΣΗ 5.                */
/*           NICOLAOS TSITSONIS            */
/*-----------------------------------------*/

// Libraries declaration
#include <stdio.h>

// Function declaration
int ft_Task_5();

int main()
{
    ft_Task_5();

    return 0;
}

int ft_Task_5()
{
    int num, sum, tempNum;

    for (num = 100; num <= 999; num++)
    {
        sum = 0, tempNum = num;

        // Calculate the sum of the digits
        while (tempNum > 0)
        {
            sum += tempNum % 10;
            tempNum /= 10;
        }

        // Check if the sum of digits is 9
        if (sum == 9)
        {
            printf("%d\n", num);
        }
    }

    return 0;
}
