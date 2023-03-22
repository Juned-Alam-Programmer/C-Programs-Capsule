void divideNumber()
{
    char charInput;
    int n, temp;
    float div;

    system("cls");
    printf("************* Division Numbers *************\n");
    printf("How many numbers you want to divide: ");
    scanf("%d", &n);

    printf("Enter %d number using space: ", n);
    scanf("%f", &div);
    for (int i = 1; i < n; i++)
    {
        scanf("%d", &temp);
        div = (float)(div / temp);
    }

    printf("divide of the numbers is : %f\n", div);

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
        divideNumber();
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