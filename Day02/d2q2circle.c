#include<stdio.h>
int main() {

float radius, area, circumference;
printf("Enter radius of circle\n");
scanf("%f", &radius);

area = 3.14 * radius * radius;
circumference = 2 * 3.14 * radius;

printf("Area of circle is %.2f\n", area);
printf("Circumference of circle is %.2f\n", circumference); 


    return 0;
    }
