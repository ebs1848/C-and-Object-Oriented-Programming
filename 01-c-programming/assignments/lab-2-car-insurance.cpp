/*
OSTIM Technical University
CENG103 - Computer Programming 1
2020 - 2021 Fall
Laboratory 2
*/

#include <stdio.h>

int main (void)
{
    int year;
    int accidents;
    double policy_cost;

    printf("Welcome to car insurance policy cost calculator\n");

    printf("Please enter the year of your car: \n");
    scanf("%d", &year);
    if (year > 2020 || year < 2000)
    {
        printf("Year must be in between 2000 and 2020\n");
        return 0;
    }

    printf("Please enter the number of accidents so far invloving your car: \n");
    scanf("%d", &accidents);
    if (accidents < 0 || accidents > 100)
    {
        printf("Number of accidents must be in between 0 and 100\n");
        return 0;
    }

    if (year <= 2010)
    {
        policy_cost = 856;
    }
    else if (year >= 2011 && year <= 2013)
    {
        policy_cost = 811;
    }
    else if (year >= 2014 && year <= 2016)
    {
        policy_cost = 783;
    }
    else if (year >= 2017 && year <= 2019)
    {
        policy_cost = 807;
    }
    else if (year == 2020)
    {
        policy_cost = 1065;
    }

    if (accidents == 1)
    {
        policy_cost *= 1.1;
    }
    else if (accidents == 2)
    {
        policy_cost *= 1.4;
    }
    else if (accidents == 3)
    {
        policy_cost *= 1.7;
    }
    else if (accidents > 3)
    {
        policy_cost *= 2.1;
    }

    printf("Your car insurance policy cost is %.2f TL\n", policy_cost);
    printf("Have a good day!\n");
    return 0;
}
