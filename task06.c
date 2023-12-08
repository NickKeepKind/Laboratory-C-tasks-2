/*-----------------------------------------*/
/*  ΕΡΓΑΣΙΑ ΕΞΑΜΗΝΟΥ Deadline: 23-12-2023  */
/*                ΑΣΚΗΣΗ 6.                */
/*           NICOLAOS TSITSONIS            */
/*-----------------------------------------*/

// Libraries declaration
#include <stdio.h>

// Function declaration
int ft_Task_6();

int main()
{
    ft_Task_6();

    return 0;
}

int ft_Task_6()
{
    const int numPrograms = 18;
    int cmds, over200 = 0, atMost120 = 0, totalCmds = 0;
    float avgCmds, percentAtMost120;

    for (int i = 0; i < numPrograms; i++)
    {
        printf("Enter commands in program %d: ", i + 1);
        scanf("%d", &cmds);

        totalCmds += cmds;

        if (cmds > 200)
        {
            over200++;
        }

        if (cmds <= 120)
        {
            atMost120++;
        }
    }

    avgCmds = (float)totalCmds / numPrograms;                   // Calculating the average number of commands per program
    percentAtMost120 = (float)atMost120 / numPrograms * 100;    // Calculating the percentage of programs with at most 120 commands

    printf("Average commands per program: %.2f\n", avgCmds);
    printf("Programs over 200 commands: %d\n", over200);
    printf("Percent at most 120 commands: %.2f%%\n", percentAtMost120);

    return 0;
}