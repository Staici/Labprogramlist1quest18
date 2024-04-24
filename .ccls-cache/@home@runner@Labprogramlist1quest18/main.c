#include <stdio.h>
#include <math.h>
int main(void){
  float R;
  float c;
  float r=3.14;
  float A;
  float D;
  printf("Digite o raio de uma circunferência");
  scanf("%f",&R);
  c = 2*r*R;
  D =2*R;
  A = r*pow(R,2);
  printf("O comprimento da circunferência é: %f\n",c);
  
  printf("\n O diâmetro da circunferência é: %f",D);
  
  printf("\n A área da circunferência é: %f",A);
  return 0;
}