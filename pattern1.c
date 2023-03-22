void pattern1()
{
    char charInput;
    int i, j, n;
    system("cls");
    printf("************* Pattern 1 *************\n");
    printf("Enter the number of row: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

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
        pattern1();
    }
    else if (charInput == 'B' || charInput == 'b')
    {
        patternPrinting();
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