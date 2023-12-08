/*-----------------------------------------*/
/*  ΕΡΓΑΣΙΑ ΕΞΑΜΗΝΟΥ Deadline: 23-12-2023  */
/*                ΑΣΚΗΣΗ 4.                */
/*           NICOLAOS TSITSONIS            */
/*-----------------------------------------*/

// Libraries declaration
#include <stdio.h>

// Function declaration
int ft_Task_4();

int main()
{
    ft_Task_4();

    return 0;
}

int ft_Task_4()
{
    const int price = 650;
    int week = 0;
    float weeklyMoney = 35, saved = 0;

    while (saved < price)
    {
        week++;
        saved += weeklyMoney;
        weeklyMoney *= 2;  // Doubling the allowance for the next week
    }

    float remaining = saved - price;
    
    printf("Weeks needed: %d\n", week);
    printf("Remaining money: Euro %.2f\n", remaining);

    return 0;
}
