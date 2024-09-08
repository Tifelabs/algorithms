//. Write a program to evaluate the polynomial shown here:

//  3x3 - 5x2 + 6

#include <stdio.h>
#include <math.h>


int main(void) {
    // Defining the value of x
    double x = 2.55;
    
    // Calculate each term of the polynomial
    double term1 = 3 * pow(x, 3); // 3x^3
    double term2 = -5 * pow(x, 2); // -5x^2
    double term3 = 6; // Constant term

    // Calculate the result of the polynomial
    double result = term1 + term2 + term3;
    
    // Print the result
    printf("The result of the polynomial 3x^3 - 5x^2 + 6 for x = %.2f is %.2f\n", x, result);
    
    return 0;
}
