/*-----------------------------------------*/
/*  ΕΡΓΑΣΙΑ ΕΞΑΜΗΝΟΥ Deadline: 23-12-2023  */
/*                ΑΣΚΗΣΗ 1.                */
/*           NICOLAOS TSITSONIS            */
/*-----------------------------------------*/

// Libraries declaration
#include <stdio.h>
#include <string.h>

// Function declaration
int ft_Task_1();

int main()
{
    ft_Task_1();
    return 0;
}

int ft_Task_1()
{
    char name[100], lowestScorer[100];
    int g1, g2, g3, highestGrade;
    float total, lowestScore = 101.0;

    while (1)
    {
        printf("Enter candidate's name (or END): ");
        scanf("%s", name);

        // Check for termination condition
        if (strcmp(name, ("END" || "end")) == 0)
        {
            break;
        }

        printf("Enter grade for the 1-st subject area: ");
        scanf("%d", &g1);
        printf("Enter grade for the 2-nd subject area: ");
        scanf("%d", &g2);
        printf("Enter grade for the 3-rd subject area: ");
        scanf("%d", &g3);

        // Displaying the highest grade
        highestGrade = g1;
        if (g2 > highestGrade) highestGrade = g2;
        if (g3 > highestGrade) highestGrade = g3;
        printf("Highest grade of %s: %d\n", name, highestGrade);

        // Calculating total score
        total = (g1 + g2 + g3) / 3.0;

        // Check for successful candidate
        if (total >= 55 && g1 >= 50 && g2 >= 50 && g3 >= 50)
        {
            printf("Successful Candidate: %s, Total Score: %.2f\n", name, total);

            // Check for lowest successful score
            if (total < lowestScore)
            {
                lowestScore = total;
                strcpy(lowestScorer, name);
            }
        }
    }

    // Display successful candidate with the lowest score
    if (lowestScore != 101.0)
    {
        printf("Successful candidate with the lowest score: %s, Score: %.2f\n", lowestScorer, lowestScore);
    }
    else
    {
        printf("No successful candidates.\n");
    }

    return 0;
}
