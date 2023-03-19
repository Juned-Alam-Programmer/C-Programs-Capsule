void subtractNumbers()
{
    char charInput;
    int n, sub = 0, temp;

    system("cls");
    printf("************* Subtract Numbers *************\n");
    printf("How many numbers you want to subtract: ");
    scanf("%d", &n);

    printf("Enter %d number using space: ", n);
    scanf("%d", &sub);
    for (int i = 1; i < n; i++)
    {
        scanf("%d", &temp);
        sub -= temp;
    }

    printf("subtract of the numbers is : %d\n", sub);

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
        subtractNumbers();
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