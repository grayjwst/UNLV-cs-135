#include <stdio.h>
#include <math.h>

int main(){
    
    float h; // height
    float d; // diameter
    

    printf("whats the height and diameter ");
    scanf("%f %f", &h, &d);
    //printf("the diameter is %f", d);

    float pie = 3.1459;
    float A = pie*(d/2)*(d/2); // area
    float C = 2*pie*(d/2); // circumference 
    double S = sqrt(pow(h,2)+pow(d/2,2)); // slant height
    
    float SA = A + (1/2)*C*S; 
    printf("the surface area is %f\n", SA);
    
  
}
