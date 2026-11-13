#include <stdio.h>

/**
 * print_menu - Displays the calculator menu options
 */
void print_menu(void)
{
    printf("Simple Calculator\n");
    printf("1) Add\n");
    printf("2) Subtract\n");
    printf("3) Multiply\n");
    printf("4) Divide\n");
    printf("0) Quit\n");
}

/**
 * main - Entry point for the calculator program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int choice;
    double a;
    double b;
    double result;

    while (1)
    {
        print_menu();
        printf("Choice: ");
        if (scanf("%d", &choice) != 1)
        {
            break;
        }

        if (choice == 0)
        {
            printf("Bye!\n");
            break;
        }
        else if (choice >= 1 && choice <= 4)
        {
            printf("A: ");
            if (scanf("%lf", &a) != 1)
                break;
            printf("B: ");
            if (scanf("%lf", &b) != 1)
                break;

            if (choice == 1)
            {
                result = a + b;
                printf("Result: %g\n", result);
            }
            else if (choice == 2)
            {
                result = a - b;
                printf("Result: %g\n", result);
            }
            else if (choice == 3)
            {
                result = a * b;
                printf("Result: %g\n", result);
            }
            else if (choice == 4)
            {
                if (b == 0.0)
                {
                    printf("Error: division by zero\n");
                }
                else
                {
                    result = a / b;
                    printf("Result: %g\n", result);
                }
            }
        }
        else
        {
            printf("Invalid choice\n");
        }
    }

    return (0);
}
