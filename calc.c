#include <stdio.h>

int main(){
    char operator; // to determine which operation to perform + - * / etc
    float num1, num2, result = 0;
    printf("\n Please enter the operation to perform (+ , - , * , / ): ");
    scanf("%c", &operator);


    printf("\n Enter the two numbers one by one:\n ");
    scanf("%1f%1f",&num1, &num2);


    switch(operator){
        case '+':
            printf("%.1f + %.1f = %.1f\n", num1, num2, (num1+num2));
            //result = num1 + num2;
            break;

        case '-':
        printf("%.1f + %.1f = %.1f\n", num1, num2, (num1+num2));
            //result = num1 - num2;
            break;

        case '*':
            //result = num1 * num2;
            printf("%.1f + %.1f = %.1f\n", num1, num2, (num1+num2));
            break;

        case '/':
        printf("%.1f + %.1f = %.1f\n", num1, num2, (num1+num2));
            //result = num1 / num2;
            break;

        default:
            printf("Invalid option!!!");
            break;
    }
   // printf(" The result = %.2f\n", result);

    return 0;
}