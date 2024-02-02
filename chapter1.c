#include <stdio.h>

int main()
{
    float side;
    printf("Enter the side: \n");
    scanf("%f", &side);

    float area = side * side;
    printf("The area is : %f \n", area);
    return 0;
}