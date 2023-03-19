void sumNumbers()
{
    char charInput;
    int n, sum = 0, temp;

    system("cls");
    printf("************* Addition Section *************\n");
    printf("How many numbers you want to add: ");
    scanf("%d", &n);

    printf("Enter %d number using space: ", n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &temp);
        sum += temp;
    }

    printf("Sum of the numbers is : %d\n", sum);

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
        sumNumbers();
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