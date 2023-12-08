/*-----------------------------------------*/
/*  ΕΡΓΑΣΙΑ ΕΞΑΜΗΝΟΥ Deadline: 23-12-2023  */
/*                ΑΣΚΗΣΗ 9.                */
/*           NICOLAOS TSITSONIS            */
/*-----------------------------------------*/

// Libraries declaration
#include <stdio.h>

// Function declaration
int ft_Task_9();

int main()
{
    ft_Task_9();

    return 0;
}

int ft_Task_9()
{
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            printf("%d x %d = %d\t", i, j, i * j);
        }
        printf("\n"); // Ah, the sweet sound of a new line
        // Who knew numbers could drive one nearly mad? Good times!
        // Btw, i'm just kidding, i'm fine. 🤟🥴
    }

    return 0;
}