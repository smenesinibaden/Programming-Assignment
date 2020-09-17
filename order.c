//Author: Siena Menesini-Baden
//Date: 9/13-16/20
//Title: Project 1
//taking customers' orders
//I checked with Patrick Barry to make sure I was doing this correctly, and mine looks like his, I couldn't find any differences, yet mine won't compile. I don't know what is going on, but I am submitting this anyways to get any grade rather than a missing grade. I'm sorry for the inconvenience.

#include <stdio.h>

int main()
{
int comboOne;
char sizeOne;
double priceOne;
printf("Welcome to McKeith's!\nMay I take your order?\nCombo#s: 1 - 10 | Sizes: S M L\n\nOrder 1 (combo# size price):");
scanf("%d", &comboOne);
scanf("%c", &sizeOne);
scanf("%lf\n", &priceOne);
int comboTwo;
char sizeTwo;
double priceTwo;
printf("Order 2 (combo# size price):");
scanf("%d", &comboTwo);
scanf("%c", &sizeTwo);
scanf("%lf\n", &priceTwo);
int comboThree;
char sizeThree;
double priceThree;
printf("Order 3 (combo# size price):");
scanf("%d", &comboThree);
scanf("%c", &sizeThree);
scanf("%lf\n", &priceThree);
int comboFour;
char sizeFour;
double priceFour
printf("Order 4 (combo# size price):");
scanf("%d", &comboFour);
scanf("%c", &sizeFour);
scanf("%lf\n", &priceFour);
printf("YOUR ORDER:\n=================================================\n| | Combo Size  |  Combo Number | Combo Price | |\n=================================================\n| |      %c      |       %d       |      %lf      | |\n| |-------------|---------------|-------------| |\n| |      %c      |       %d       |      %lf      | |\n| |-------------|---------------|-------------| |\n| |      %c      |       %d       |      %lf      | |\n| |-------------|---------------|-------------| |\n| |      %c      |       %d       |      %lf     | |\n=================================================");
return 0;
}
