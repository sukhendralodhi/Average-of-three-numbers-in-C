#include <stdio.h>

int main(void) {
  int a,b,c,addition, average;
  printf("Enter the numbers: \n");
  scanf("%d%d%d",&a,&b,&c);

  addition = a+b+c;
  average = addition/3;

  printf("Sum of numbers: %d\n",addition);
  printf("Average of Numbers: %d",average);
  return 0;
}