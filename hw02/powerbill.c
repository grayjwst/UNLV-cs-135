

// how many KWHRS used (scanf function)
// multiply int KWHRS by 0.61 (price)
// multiply KWHRS by 0.095 (county)
// multiply KWHRS by 0.0325 (city)
// add all numbers together, add 4.50


#include <stdio.h>

int main() {

  int KWHRS = 1;
  printf("the bill for %d kilowatts is:\n" , KWHRS);

  printf("\tThe base cost is %f\n" , KWHRS*0.61);
  printf("\tCounty surcharge is %f\n" , KWHRS*0.095);
  printf("\tcity tax is %f\n" , KWHRS*0.0325);
  printf("\tstate fees 4.5\n");
  printf("\ttotal is %f\n" , KWHRS*0.61+KWHRS*0.095+KWHRS*0.0325+4.5 );
  



}



