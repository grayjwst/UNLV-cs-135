#include <stdio.h>
#include <math.h>

int main() {

float a;
float b;
float c;

    printf("whats the value of a ");
    scanf("%f", &a);
    printf("whats the value of b ");
    scanf("%f", &b);
    printf("whats the value of c ");
    scanf("%f", &c);

    if (a == 0) {

        float x = (-c)/(b);
        printf("x=%4.f\n",x);


    } else if (pow(b,2) >= 4*a*c) {
        float x1 = (-b+sqrt(pow(b,2)-(4*a*c)))/(2*a);
        float x2 = (-b-sqrt(pow(b,2)-(4*a*c)))/(2*a);

        printf("x1 = %0.4f\n", x1);
        printf("x2 = %0.4f\n", x2);

    } else if (pow(b,2) < 4*a*c) {
        float x = (-b)/(2*a);
        float y = sqrt((4*a*c)-(pow(b,2)))/(2*a);
        printf("x1 = %0.4f+%0.4fi\n", x, y);
        printf("x2 = %0.4f-%0.4fi\n", x, y);


    } else {
        printf("an error occured\n");
    }
    


    return (0);


}