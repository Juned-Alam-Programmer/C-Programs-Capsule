#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>

#include "function_declaration.c"
#include "includeallfiles.h"

int main()
{
    mainMenu();
    getch();
    return 0;
}

void mainMenu()
{
    int input;
    system("cls");
    printf("Remember these keys: \n");
    printf("M for Main Menu\n");
    printf("A for Again\n");
    printf("E for Exit\n");
    printf("************* Main Menu *************\n");
    printf("Please, Choose an option:\n");
    printf("[1] Calculation.\n");
    printf("[2] Number Checking.\n");
    printf("[3] Pattern Printing.\n");
    printf("Your choice: ");
takeMainInputAgain:
    scanf("%d", &input);

    switch (input)
    {
    case 1:
        calculation();
        break;
    default:
        printf("Wrong choice, choose correct option: ");
        goto takeMainInputAgain;
        break;
    }
}

void calculation()
{
    int calInput;

    system("cls");
    printf("************* Calculation Section *************\n");
    printf("Please, Choose an option:\n");
    printf("[1] Addition.\n");
    printf("[2] Subtraction.\n");
    printf("[3] Multiplication.\n");
    printf("[4] Division.\n");
    printf("[5] Square of number.\n");
    printf("[6] Cube of number.\n");
    printf("Your choice: ");
takeMainInputAgain:
    scanf("%d", &calInput);

    switch (calInput)
    {
    case 1:
        sumNumbers();
        break;
    case 2:
        subtractNumbers();
        break;
        case 3:
        multiplyANumber();
        break;
    case 5:
        squareANumber();
        break;
    case 6:
        CubeANumber();
        break;
    default:
        printf("Wrong choice, choose correct option: ");
        goto takeMainInputAgain;
        break;
    }
}