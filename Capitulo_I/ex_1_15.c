#include <stdio.h>

float conversion(float temp_f);

float conversion(float temp_f){

  float p;
  p = (5.0/9.0)*(temp_f - 32.0);
  return p;
  
  
}

main(){
  float p;
  p = conversion(100.0);

  printf("%4.4f\n",conversion(100));

  return 0;
  
  
  }
  
