

#include <stdio.h>

int main() {


float a;
float b;
float c;
float d;
float e;
float f;

printf("input 3 integers: ");
scanf("%f %f %f" , &a , &b , &c);
printf("input 3 more integers: ");
scanf("%f %f %f", &d , &e , &f);

printf("%.0fx + %.0fy = %.0f\n" , a , b , c);
printf("%.0fx + %.0fy = %.0f\n" , d , e , f);



float xValue = (c*e-b*f)/(a*e-b*d);
printf("x = %.3f\n" , xValue);

float yValue = (a*f-c*d)/(a*e-b*d);
printf("y = %.3f\n", yValue);





}

