#include <stdio.h>

double add(double num1, double num2);
double subtract(double num1, double num2);
double multiply(double num1, double num2);
double divide(double num1, double num2);

int main() {
    double num1, num2;
    char operation;

    printf("Enter the first number: ");
    scanf("%lf", &num1);
    
    printf("Enter the second number: ");
    scanf("%lf", &num2);
    
    printf("Enter the operator (+, -, *, /): ");
    scanf(" %c", &operation);

    switch(operation) {
        
		case '+':
            printf("%.2f + %.2f = %.2f\n", num1, num2, add(num1, num2));
            break;
            
        case '-':
            printf("%.2f - %.2f = %.2f\n", num1, num2, subtract(num1, num2));
            break;
            
        case '*':
            printf("%.2f * %.2f = %.2f\n", num1, num2, multiply(num1, num2));
            break;
            
        case '/':
                printf("%.2f / %.2f = %.2f\n", num1, num2, divide(num1, num2));
            break;
        
		default:
            printf("Error: Please Enter valid operator!\n");
    }

    return 0;
}

double add(double num1, double num2) {
    return num1 + num2;
}

double subtract(double num1, double num2) {
    return num1 - num2;
}

double multiply(double num1, double num2) {
    return num1 * num2;
}

double divide(double num1, double num2) {
    return num1 / num2;
}
