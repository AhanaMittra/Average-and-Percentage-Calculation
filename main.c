#include <stdio.h>

void average(float a,float b, float c,float *avg,float *per){
  *avg = (a + b + c) / 3;
  *per = ((a + b + c) / 300) * 100;
}


int main(void) {
  float a, b, c;
  float avg , per;

  printf("Enter the number you got in the three subjects:\n ");
  printf("1st subject: ");
  scanf("%f", &a);
  printf("2nd subject: ");
  scanf("%f", &b);
  printf("3rd subject: ");
  scanf("%f", &c);
  average(a, b, c, &avg, &per);
  printf("The average is: %f\nThe percentage is: %f", avg, per);
  return 0;
}