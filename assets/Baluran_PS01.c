#include <stdio.h>
int main () {

    float length, width;

    printf("Enter the length of the rectangle: "); //input
    scanf("%f", &length);

    printf("\nEnter the width of the rectangle: "); //input
    scanf("%f", &width);

    float area = length*width; //process
    printf("\n**********************************************\n"); //output
    printf("\nThe area of the rectangle is %.2f.", area);

    float perimeter = 2*(length+width); //process
    printf("\n\nThe perimeter of the rectangle is %.2f.\n", perimeter); //output

return 0;
}
