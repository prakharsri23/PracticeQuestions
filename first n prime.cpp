#include <stdio.h>
int main ()
{
	int n;
	int i=3;
	int j;
	int count,c;
	printf ("Enter limit: ");
scanf("%d",&n);
if (n>=1)
{ 
 printf("The first %d prime number are: ", n);
 printf("2 ");
}
for (count=2;count<=n;i++)
{ 
 for(c=2;c<i;c++)
 { 
   if(i%c==0)
   break;
 }
 if(c==i) //c is prime
 { 
 printf("%d ",i);
 count ++;
 }
}
return 0; 
}
