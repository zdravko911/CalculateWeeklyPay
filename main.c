#include<stdio.h>

#define PAYRATE 12.00
#define PAYRATE_OVERTIME 18.00
#define TAXRATE_300 0.15
#define TAXRATE_150 0.20
#define  TAXRATE_REST 0.25
#define OVERTIME 40
int main()
{
    int hours = 0.0;
    double grossPay = 0.0;
    double taxes = 0.0;
    double netPay = 0.0;

     //getting input from the user

    printf("Please enter the number of hours worked : ");
    scanf("%d",&hours);

      // calculating gross pay

    if (hours<=40)
    {
        grossPay = hours * PAYRATE;
    }
    else
    {
        grossPay = 40 * PAYRATE;
        double overtimePay = 0.0;
        overtimePay = (hours - 40) * PAYRATE_OVERTIME;
        grossPay += overtimePay;
    }

    // calculating taxes

    if (grossPay<=300)
    {
        taxes = grossPay * TAXRATE_300;
    }
    else if (grossPay>300 && grossPay<=450)
    {
        taxes = 300 * TAXRATE_300;
        taxes += (grossPay-300) * TAXRATE_150;
        double taxFor150 = (grossPay-300) * TAXRATE_150;


    }
    else if (grossPay>450)
    {
        taxes = 300 * TAXRATE_300;
        taxes += 150 * TAXRATE_150;
        taxes += (grossPay-450) * TAXRATE_REST;
    }

    // calculating net pay

    netPay = grossPay - taxes;

    // display output

    printf("Hours worked = %d hours.\n",hours);
    printf("Your gross pay is = %2.f $.\n",grossPay);
    printf("Your taxes are : %2.f $.\n",taxes);
    printf("Your net pay is = %2.f $.\n",netPay);

    return 0;

}
