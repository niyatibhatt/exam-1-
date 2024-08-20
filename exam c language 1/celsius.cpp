#include <stdio.h> 
int main() { 
  float celsius = 0.; 
  printf("Enter Celsius : "); 
  scanf("%f", &celsius); 
  printf("%f degrees Fahrenheit\n", 9.f/5.f*celsius+32.f); 
  return 0; 
}