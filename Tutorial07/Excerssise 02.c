#include <stdio.h>
#include <math.h>
#include <assert.h>

// Function prototype to calculate the hypotenuse of a triangle
double hypotenuse(double side1, double side2);

int main(void)
{
   double side1, side2;
   
   // Use assert to check if the calculated hypotenuse is within a small tolerance of the expected result
   assert(fabs(hypotenuse(3, 4) - 5.00) <= 0.01);    // Test with sides 3 and 4
   assert(fabs(hypotenuse(5, 12) - 13.00) <= 0.01);   // Test with sides 5 and 12
   assert(fabs(hypotenuse(8, 15) - 17.00) <= 0.01);   // Test with sides 8 and 15
   
   printf("Enter Side 1 of the Triangle: ");
   scanf("%lf", &side1);
   
   printf("Enter Side 2 of the Triangle: ");
   scanf("%lf", &side2);
   
   // Calculate the hypotenuse using the hypotenuse function and print the result
   printf("Hypotenuse is: %lf", hypotenuse(side1, side2));
   
   return 0;
}

// Function to calculate the hypotenuse of a triangle
double hypotenuse(double side1, double side2)
{
    double hypo;
    hypo = sqrt(pow(side1, 2) + pow(side2, 2));
    return hypo;
}
