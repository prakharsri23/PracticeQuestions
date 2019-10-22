#include <stdio.h>//including standard input output
int main ()//in main function
{ 
  int number=1;//initializing number to 1
  int binary=0; initializing binary variable to 0
  int n, place=1;
  int remainder;
  printf("Enter number: ");
  scanf("%d", &number );
  n=number;
  while(n>0)//entering into loop
  { 
    remainder= n%2;
    binary+= remainder*place;
    place*=10;
    n=n/2;
  }
  printf("Binary is %d", binary);//displaying output to console
}
