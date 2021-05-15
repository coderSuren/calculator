// Git/GitHub workshop: Hands on session
// Program: Calculator
// Author: Manav Patnaik

// Import required header files
#include <stdio.h>
#include <math.h>

// Calculator function to be written here
// Functionalities required:
// 1. Add
// 2. Subtract
// 3. Multiply
// 4. Divide
// 5. Percentage
// 6. Exponentiation
// 7. Sine (sin)
// 8. Cosine (cos)
// 9. Tangent (tan)
// 10. Square root
// 11. Ceil
// 12. Floor
// 13. Absolute value
// 14. Natural exponent (e^x)

// Sample code for 1. Add
double add(double a, double b) {
    return a + b;
}

double percentage(double a,double b){
    return a % b;
}

int main() {
    float a,b,d;
    scanf("%f %f",&a,&b);
    d=percentage(a,b);
    printf("%f",d);
    return 0;
}