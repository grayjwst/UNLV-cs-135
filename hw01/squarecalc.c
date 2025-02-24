#include <stdio.h>

int main() {
    printf("Hello! \nI'm a program that will calculate the perimeter and area of a square for you.\nJust give me the length of a side and I'll figure out the rest.\n");
   
int length;
printf("Please provide the measurement of one side of the square: ");
scanf ("%d" , &length);
printf("The perimeter of your square is %d\n" , length*4);
printf("The area of your square is %d\n" , length*length);

return 0;

}

