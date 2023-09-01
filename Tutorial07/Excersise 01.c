#include <stdio.h>
#include <assert.h>

// Function prototype to calculate quality points based on average marks
int qualityPoints(float avg);

// Function prototype to check function behavior with assert statements
void checkstate();

int main(void)
{   
    checkstate();  // Check the state of the qualityPoints function with assert statements
    
    float avg;

    printf("Enter Your Average marks: ");
    scanf("%f", &avg);
    
    // Calculate quality points using the qualityPoints function and print the result
    printf("Return Value is: %d", qualityPoints(avg));
    
    return 0;
}

// Function to calculate quality points based on average marks
int qualityPoints(float avg)
{
    if (90 <= avg && avg <= 100)
    {
        return 4;
    }
    else if (80 <= avg && avg <= 89)
    {
        return 3;
    }
    else if (70 <= avg && avg <= 79)
    {
        return 2;
    }
    else if (60 <= avg && avg <= 69)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

// Function to check the behavior of the qualityPoints function with assert statements
void checkstate()
{
    assert(qualityPoints(90) == 4);  // Assert that qualityPoints(90) should return 4
    assert(qualityPoints(65) == 1);  // Assert that qualityPoints(65) should return 1
    assert(qualityPoints(85) == 3);  // Assert that qualityPoints(85) should return 3
}
