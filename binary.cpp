#include <stdio.h>
int main ()
{ 
  int number=1;
  int binary=0; 
  int n, place=1;
  int remainder;
  printf("Enter number: ");
  scanf("%d", &number );
  n=number;
  while(n>0)
  { 
    remainder= n%2;
    binary+= remainder*place;
    place*=10;
    n=n/2;
  }
  printf("Binary is %d", binary);
  return 0;
}
