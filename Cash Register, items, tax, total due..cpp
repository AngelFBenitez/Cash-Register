#include <stdio.h>

int main() 
{
// declare variables
float tax_percentage;

float item1_price;

float item2_price;

float item3_price;

float payable_tax;

float price_before_tax;

float price_after_tax;

// print
printf("Enter tax rate percentage\n");
// user input
scanf("%f", &tax_percentage);

printf("Price of item one\n");

scanf("%f", &item1_price);

printf("Price of item two\n");

scanf("%f", &item2_price);

printf("Price of item three\n");

scanf("%f", &item3_price);

// calculations
price_before_tax = item1_price + item2_price + item3_price;

payable_tax = price_before_tax * (tax_percentage / 100);

price_after_tax = price_before_tax + payable_tax;

printf("Total price before the tax : %.2f\n", price_before_tax);

printf("The total tax payable : %.2f\n", payable_tax);

printf("The total price after the tax: %.2f\n\n\n\n", price_after_tax);

return 0;

}
