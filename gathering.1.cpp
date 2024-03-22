#include <stdio.h>


float addition(float a, float b)
{
    return a + b;
}


float subtraction(float a, float b)
{
    return a - b;
}


float multiplication(float a, float b)
{
    return a * b;
}


float division(float a, float b)
{
    if (b != 0)
        return a / b;
    else
    {
        printf("Error: Division by zero\n");
        return 0;
    }
}


int modulo(int a, int b)
{
    if (b != 0)
        return a % b;
    else
    {
        printf("Error: Division by zero\n");
        return 0;
    }
}

int main()
{
    int choice;
    float num1, num2;
    
    do
    {
        printf("\nPress 1 for +\n");
        printf("Press 2 for -\n");
        printf("Press 3 for *\n");
        printf("Press 4 for /\n");
        printf("Press 5 for %%\n");
        printf("Press 0 to exit\n\n");
        
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        if (choice == 0)
        {
            printf("Exiting program...\n");
            break;
        }
        
        printf("Enter the first number: ");
        scanf("%f", &num1);
        printf("Enter the second number: ");
        scanf("%f", &num2);
        
        switch (choice)
        {
            case 1:
                printf("Addition of %.2f and %.2f is %.2f\n", num1, num2, addition(num1, num2));
                break;
            case 2:
                printf("Subtraction of %.2f and %.2f is %.2f\n", num1, num2, subtraction(num1, num2));
                break;
            case 3:
                printf("Multiplication of %.2f and %.2f is %.2f\n", num1, num2, multiplication(num1, num2));
                break;
            case 4:
                printf("Division of %.2f and %.2f is %.2f\n", num1, num2, division(num1, num2));
                break;
            case 5:
                printf("Modulo of %.2f and %.2f is %d\n", num1, num2, modulo((int)num1, (int)num2));
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (1);
    
    return 0;
}
