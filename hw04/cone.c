#include <stdio.h>
#include <math.h>
<<<<<<< HEAD
#include <string.h> // so we can use strlen
=======
>>>>>>> 576a950 (fisrt version)

int main(){
    
    float h; // height
    float d; // diameter
<<<<<<< HEAD
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
=======
    

    printf("whats the height and diameter ");
    scanf("%f %f", &h, &d);
    //printf("the diameter is %f", d);

    float pie = 3.1459;
    float A = pie*(d/2)*(d/2); // area
    float C = 2*pie*(d/2); // circumference 
    double S = sqrt(pow(h,2)+pow(d/2,2)); // slant height
    
    float SA = A + (1/2)*C*S; 
    printf("the surface area is %f\n", SA);
    
>>>>>>> 576a950 (fisrt version)
  
}
