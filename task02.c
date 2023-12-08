/*-----------------------------------------*/
/*  ΕΡΓΑΣΙΑ ΕΞΑΜΗΝΟΥ Deadline: 23-12-2023  */
/*                ΑΣΚΗΣΗ 2.                */
/*           NICOLAOS TSITSONIS            */
/*-----------------------------------------*/

// Libraries declaration
#include <stdio.h>

// Function declaration
int ft_Task_2();

int main()
{
    ft_Task_2();

    return 0;
}

int ft_Task_2()
{
    long long number, mirror = 0;

    printf("Enter an integer: ");
    scanf("%lld", &number);

    while (number != 0)
    {
        mirror = mirror * 10 + number % 10;
        number /= 10;
    }

    printf("Mirror image: %lld\n", mirror);

    return 0;
}
