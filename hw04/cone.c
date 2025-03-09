#include <stdio.h>
#include <math.h>
#include <string.h> // so we can use strlen

int main(){
    
    float h; // height
    float d; // diameter
    char units[100];

    printf("What is the height of the cone? ");
    scanf("%f", &h);
    printf("What is the diameter of the cone? ");
    scanf("%f", &d);
    printf("What is the unit of measurement? ");
    fgets(units, 100, stdin);
    fgets(units, 100, stdin);

    size_t ln = strlen(units)-1; // gets rid of extra \n
    if (units[ln] == '\n')
        units[ln] = '\0';

    float pie = 3.14159;
    float r = d/2; // radius
    float A = pie*r*r; // area
    float C = 2*pie*r; // circumference 
    float S = sqrt(pow(h,2)+pow(r,2)); // slant height
    
    printf("A right circular cone with a height of %.2f %s and a diameter of %.2f %s will have:\n", h, units, d, units);

    float SA = A + ((C*S)/2);  // surface area
    printf("A surface area of %.4f square %s\n", SA, units);
    
    float V = (A*h)/3; // volume
    printf("And a volume of %.4f cubic %s\n", V, units);
  
}
