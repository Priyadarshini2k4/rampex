#include <stdio.h>
int main() 
{
    float length,width,area,perimeter;
    printf("Length of the rectangle:");
    scanf("%f",&length);
    printf("width of the rectangle:");
    scanf("%f",&width);
    area=length*width;
    perimeter= 2*(length+width);
    printf("The area and perimeter of rectangle is:%f%f\n",area,perimeter);
    return 0;
}