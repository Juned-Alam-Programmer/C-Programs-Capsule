
void CubeANumber()
{
    char charInput;
    int n, cube = 0;

    system("cls");
    printf("************* Cube of A Number *************\n");

    printf("Enter the number: ");
    scanf("%d", &n);

    cube = n * n * n;

    printf("Cube of %d is : %d\n", n, cube);

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
        CubeANumber();
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