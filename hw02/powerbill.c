

// how many KWHRS used
// multiply int KWHRS by 0.61 (price)
// multiply KWHRS by 0.095 (county)
// multiply KWHRS by 0.0325 (city)
// add all numbers together, add 4.50


#include <stdio.h>

const float price = 0.61;
const float countySurcharge = 0.095;
const float cityTax = 0.0325;
const float stateCharge = 4.50;

int main() {

  int KWHRS = 100.2; // doesn't do decimals?
  printf("The bill for %d kilowatts is:\n" , KWHRS);

  // TODO: update equations to use constants and create new vars for each charge

  float base = KWHRS*price;
  printf("\tThe base cost is: %f\n" , base);

  float county = KWHRS*countySurcharge;
  printf("\tThe county surcharge is: %f\n" , county);

  float city = KWHRS*cityTax;
  printf("\tThe city tax is: %f\n" , city);

  float state = stateCharge;
  printf("\tThe state fees are: %f\n" , state);

  float total = base+county+city+state;
  printf("\tThe total is: %f\n" , total);
  

}



