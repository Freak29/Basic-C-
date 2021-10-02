#include <stdio.h>
int main()
{
      int n,f,x,s,y,t,l,rev;
      printf("Enter Four Digit Number : ");
      scanf("%d",&n);
      f=n/1000;  
      x=n%1000;
      s=x/100;
      y=x%100;
      t=y/10;
      l=y%10;
      rev=l*1000+t*100+s*10+f;
      printf("\nReverse Number : %d",rev);
      return 0;
}

