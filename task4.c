/*-----------------------------------------*/
/*  ΕΡΓΑΣΙΑ ΕΞΑΜΗΝΟΥ Deadline: 23-12-2023  */
/*                ΑΣΚΗΣΗ 4.                */
/*           NICOLAOS TSITSONIS            */
/*-----------------------------------------*/

// Libraries declaration
#include <stdio.h>

// Function declaration
int SmartphoneSavingsTime();

int main()
{
    SmartphoneSavingsTime();

    return 0;
}

int SmartphoneSavingsTime()
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
