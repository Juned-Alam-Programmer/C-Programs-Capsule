void multiplyANumber()
{
    char charInput;
    int n, multi = 1, temp;

    system("cls");
    printf("************* multiplication Numbers *************\n");
    printf("How many numbers you want to multiply: ");
    scanf("%d", &n);

    printf("Enter %d number using space: ", n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &temp);
        multi *= temp;
    }

    printf("multiply of the numbers is : %d\n", multi);

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
        multiplyANumber();
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