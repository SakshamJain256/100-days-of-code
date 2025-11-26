#include<stdio.h>
int main(){

int length,breadth,area,perimeter;
printf("Enter length of rectangle\n");
scanf("%d",&length);
printf("Enter breadth of rectangle\n");     
scanf("%d",&breadth);


perimeter=2*(length+breadth);
area=length*breadth;    

printf("Area of rectangle is %d\n",area);
printf("Perimeter of rectangle is %d\n",perimeter);

    return 0;
}