/*-----------------------------------------*/
/*  ΕΡΓΑΣΙΑ ΕΞΑΜΗΝΟΥ Deadline: 23-12-2023  */
/*                ΑΣΚΗΣΗ 8.                */
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
    int years = 0;
    double populationA = 30000, populationB = 45000;
    const double growthRateA = 0.03, growthRateB = 0.01;

    while (populationA <= populationB)
    {
        populationA += populationA * growthRateA;  // Increase City A's population
        populationB += populationB * growthRateB;  // Increase City B's population
        years++;
    }

    printf("Years until City A's population exceeds City B's: %d\n", years);
    // Plot twist: It's not a race, but don't tell City A

    return 0;
}

/*
int ft_Task_9_With_Input()
{
    double populationA, populationB, growthRateA, growthRateB;
    int years = 0;

    // User inputs for initial populations and growth rates
    printf("Enter initial population of City A: ");
    scanf("%lf", &populationA);
    printf("Enter growth rate of City A (as a decimal): ");
    scanf("%lf", &growthRateA);

    printf("Enter initial population of City B: ");
    scanf("%lf", &populationB);
    printf("Enter growth rate of City B (as a decimal): ");
    scanf("%lf", &growthRateB);

    while (populationA <= populationB)
    {
        populationA *= (1 + growthRateA);  // City A chugging growth juice
        populationB *= (1 + growthRateB);  // City B, more of a tea person
        years++;
    }

    printf("City A outgrows B in %d years. Applause in the background!\n", years);

    return 0;
}
*/
