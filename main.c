#include <stdio.h>
#include <windows.h>

void convertLength();
void convertWeight();
void convertTemperature();

void convertLength()
{
    int ch;
    double value;

    printf("\n\033[1;36mYou Choose Length Conversion:\033[0m\n\n");
    printf("\033[1;36m1. Meters to Kilometers\033[0m\n");
    printf("\033[1;36m2. Kilometers to Meters\033[0m\n");
    printf("\033[1;36m3. Inches to Centimeters\033[0m\n");
    printf("\033[1;36m4. Centimeters to Inches\033[0m\n");

    printf("\033[1;32mEnter your choice (1-4): \033[0m\t");
    scanf("%d", &ch);
    printf("\033[1;36mEnter the value to convert: \033[0m\t");
    scanf("%lf", &value);

    switch (ch)
    {
    case 1:
        printf("\033[1;32mCalculating.........\033[0m");
        Sleep(3000);
        printf("\n\n\033[1;33m############################################################\033[0m\n");
        printf("\033[1;33m###                                                   ###### \033[0m\n");
        printf("\033[1;33m### %.2lf meters is %.2lf kilometers                  \033[0m\n", value, value / 1000);
        printf("\033[1;33m###                                                   ###### \033[0m\n");
        printf("\033[1;33m############################################################\033[0m\n\n\n\n");
        break;
    case 2:
        printf("\033[1;32mCalculating.........\033[0m");
        Sleep(3000);
        printf("\n\n\033[1;33m############################################################\033[0m\n");
        printf("\033[1;33m###                                                   ###### \033[0m\n");
        printf("\033[1;33m### %.2lf kilometers is %.2lf meters                \033[0m\n", value, value * 1000);
        printf("\033[1;33m###                                                   ###### \033[0m\n");
        printf("\033[1;33m############################################################\033[0m\n\n\n\n");
        break;
    case 3:
        printf("\033[1;32mCalculating.........\033[0m");
        Sleep(3000);
        printf("\n\n\033[1;33m############################################################\033[0m\n");
        printf("\033[1;33m###                                                   ###### \033[0m\n");
        printf("\033[1;33m### %.2lf inches is %.2lf centimeters                  \033[0m\n", value, value * 2.54);
        printf("\033[1;33m###                                                   ###### \033[0m\n");
        printf("\033[1;33m############################################################\033[0m\n\n\n\n");
        break;
    case 4:
        printf("\033[1;32mCalculating.........\033[0m");
        Sleep(3000);
        printf("\n\n\033[1;33m############################################################\033[0m\n");
        printf("\033[1;33m###                                                   ###### \033[0m\n");
        printf("\033[1;33m### %.2lf centimeters is %.2lf inches              \033[0m\n", value, value / 2.54);
        printf("\033[1;33m###                                                   ###### \033[0m\n");
        printf("\033[1;33m############################################################\033[0m\n\n\n\n");
        break;
    default:
        printf("\033[1;31m####################################################\033[0m\n");
        printf("\033[1;31m#####                                          #####\033[0m\n");
        printf("\033[1;31m#####    Invalid choice. Please try again.     #####\033[0m\n");
        printf("\033[1;31m#####                                          #####\033[0m\n");
        printf("\033[1;31m####################################################\033[0m\n\n\n");
    }
}

void convertWeight()
{
    int choice;
    double value;

    printf("\n\n\033[1;35mYou Choose Weight Conversion:\033[0m\n");
    printf("\033[1;35m1. Grams to Kilograms\033[0m\n");
    printf("\033[1;35m2. Kilograms to Grams\033[0m\n");
    printf("\033[1;35m3. Pounds to Kilograms\033[0m\n");
    printf("\033[1;35m4. Kilograms to Pounds\033[0m\n");

    printf("\033[1;32mEnter your choice (1-4): \033[0m");
    scanf("%d", &choice);
    printf("\033[1;35mEnter the value to convert: \033[0m");
    scanf("%lf", &value);

    switch (choice)
    {
    case 1:
        printf("\033[1;32mCalculating.........\033[0m");
        Sleep(3000);
        printf("\n\n\033[1;33m############################################################\033[0m\n");
        printf("\033[1;33m###                                                   ###### \033[0m\n");
        printf("\033[1;33m### %.2lf grams is %.2lf kilograms                 \033[0m\n", value, value / 1000);
        printf("\033[1;33m###                                                   ###### \033[0m\n");
        printf("\033[1;33m############################################################\033[0m\n\n\n\n");
        break;
    case 2:
        printf("\033[1;32mCalculating.........\033[0m");
        Sleep(3000);
        printf("\n\n\033[1;33m############################################################\033[0m\n");
        printf("\033[1;33m###                                                   ###### \033[0m\n");
        printf("\033[1;33m### %.2lf kilograms is %.2lf grams                 \033[0m\n", value, value * 1000);
        printf("\033[1;33m###                                                   ###### \033[0m\n");
        printf("\033[1;33m############################################################\033[0m\n\n\n\n");
        break;
    case 3:
        printf("\033[1;32mCalculating.........\033[0m");
        Sleep(3000);
        printf("\n\n\033[1;33m############################################################\033[0m\n");
        printf("\033[1;33m###                                                   ###### \033[0m\n");
        printf("\033[1;33m### %.2lf pounds is %.2lf kilograms                  \033[0m\n", value, value * 0.453592);
        printf("\033[1;33m###                                                   ###### \033[0m\n");
        printf("\033[1;33m############################################################\033[0m\n\n\n\n");
        break;
    case 4:
        printf("\033[1;32mCalculating.........\033[0m");
        Sleep(3000);
        printf("\n\n\033[1;33m############################################################\033[0m\n");
        printf("\033[1;33m###                                                   ###### \033[0m\n");
        printf("\033[1;33m### %.2lf kilograms is %.2lf pounds                  \033[0m\n", value, value / 0.453592);
        printf("\033[1;33m###                                                   ###### \033[0m\n");
        printf("\033[1;33m############################################################\033[0m\n\n\n\n");
        break;
    default:
        printf("\033[1;31m####################################################\033[0m\n");
        printf("\033[1;31m#####                                          #####\033[0m\n");
        printf("\033[1;31m#####    Invalid choice. Please try again.     #####\033[0m\n");
        printf("\033[1;31m#####                                          #####\033[0m\n");
        printf("\033[1;31m####################################################\033[0m\n\n\n");
    }
}

void convertTemperature()
{
    int choice;
    double value;

    printf("\n\n\033[1;33mYou Choose Temperature Conversion:\033[0m\n");
    printf("\033[1;33m1. Celsius to Fahrenheit\033[0m\n");
    printf("\033[1;33m2. Fahrenheit to Celsius\033[0m\n");

    printf("\033[1;32mEnter your choice (1-2): \033[0m");
    scanf("%d", &choice);
    printf("\033[1;35mEnter the temperature to convert: \033[0m");
    scanf("%lf", &value);

    switch (choice)
    {
    case 1:
        printf("\033[1;32mCalculating.........\033[0m");
        Sleep(3000);
        printf("\n\n\033[1;33m############################################################\033[0m\n");
        printf("\033[1;33m###                                                   ###### \033[0m\n");
        printf("\033[1;33m### %.2lf Celsius is %.2lf Fahrenheit                  \033[0m\n", value, (value * 9 / 5) + 32);
        printf("\033[1;33m###                                                   ###### \033[0m\n");
        printf("\033[1;33m############################################################\033[0m\n\n\n\n");
        break;
    case 2:
        printf("\033[1;32mCalculating.........\033[0m");
        Sleep(3000);
        printf("\n\n\033[1;33m############################################################\033[0m\n");
        printf("\033[1;33m###                                                   ###### \033[0m\n");
        printf("\033[1;33m### %.2lf Fahrenheit is %.2lf Celsius                 \033[0m\n", value, (value - 32) * 5 / 9);
        printf("\033[1;33m###                                                   ###### \033[0m\n");
        printf("\033[1;33m############################################################\033[0m\n\n\n\n");
        break;
    default:
        printf("\033[1;31m####################################################\033[0m\n");
        printf("\033[1;31m#####                                          #####\033[0m\n");
        printf("\033[1;31m#####    Invalid choice. Please try again.     #####\033[0m\n");
        printf("\033[1;31m#####                                          #####\033[0m\n");
        printf("\033[1;31m####################################################\033[0m\n\n\n");
    }
}

int runApp()
{
    int choice;

    printf("\033[1;32m####################################################\033[0m\n");
    printf("\033[1;32m#               Unit Conversion Tool               #\033[0m\n");
    printf("\033[1;32m#            Software Version 0.1 Alpha            #\033[0m\n");
    printf("\033[1;32m#               Software written in C              #\033[0m\n");
    printf("\033[1;32m####################################################\033[0m\n\n\n");

    printf("---------------------\n");
    printf("1. Length Conversion\n");
    printf("2. Weight Conversion\n");
    printf("3. Temperature Conversion\n");
    printf("4. Exit\n\n\n");

    printf("\033[1;32mEnter your choice (1-4): \033[0m\t");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        convertLength();
        runApp();
        break;
    case 2:
        convertWeight();
        runApp();
        break;
    case 3:
        convertTemperature();
        runApp();
        break;
    case 4:
        printf("\033[1;31mApp is closing.......\033[0m\n");
        printf("\033[1;31mThank you so much\033[0m\n\n");
        return 0;
    default:
        printf("\033[1;31m####################################################\033[0m\n");
        printf("\033[1;31m#####                                          #####\033[0m\n");
        printf("\033[1;31m#####    Invalid choice. Please try again.     #####\033[0m\n");
        printf("\033[1;31m#####                                          #####\033[0m\n");
        printf("\033[1;31m####################################################\033[0m\n\n\n");
    }
}

int main()
{
    runApp();
}