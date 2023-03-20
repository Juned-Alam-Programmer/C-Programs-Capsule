
void squareANumber()
{
    char charInput;
    int n, square = 0;

    system("cls");
    printf("************* Square of A Number *************\n");

    printf("Enter the number: ");
    scanf("%d", &n);

    square = n * n;

    printf("Square of %d is : %d\n", n, square);

    printf("Command > ");
takeCharInputAgain:
    fflush(stdin);
    scanf("%c", &charInput);
    if (charInput == 'M' || charInput == 'm')
    {
        mainMenu();
    }
    else if (charInput == 'A' || charInput == 'a')
    {
        squareANumber();
    }
    else if (charInput == 'B' || charInput == 'b')
    {
        calculation();
    }
    else if (charInput == 'E' || charInput == 'e')
    {
        exit(0);
    }
    else
    {
        printf("Wrong command >");
        goto takeCharInputAgain;
    }
}