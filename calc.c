#include <stdio.h>

int main(){
    char ch; // to determine which operation to perform + - * / etc
    float num1, num2, result = 0;
    printf("\n Please enter the operation to perform : ");
    scanf("%c", &ch);
        // if ( ch != '*','-','+','/')
        // {
        //     printf("Invalid input!!");
        // }


    printf("\n Please enter the numbers : ");
    scanf("%f%f",&num1,&num2);


    switch(ch){
        case '+':
            result = num1 + num2;
            break;


        case '-':
            result = num1 - num2;
            break;

        case '*':
            result = num1 * num2;
            break;

        case '/':
            result = num1 / num2;
            break;

        default:
            printf("Invalid option!!!");
            break;
    }
    printf(" The result = %.2f\n", result);

    return 0;
}