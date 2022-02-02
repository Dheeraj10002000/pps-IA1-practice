#include <stdio.h>
int input()
{
  int a;
  printf("enter a number\n");
  scanf("%d",&a);
  return a;
}
int cmp(int a, int b, int c)
{
  if(a>b && a>c)
    return 0;
  else if(b>a && b>c)
   return 1;
  else
   return 2;
}
void output(int a, int b, int c, int largest)
 {
   if(largest == 0)
     printf("%d is largest among %d,%d,%d",a,a,b,c);
   else if(largest == 1)
      printf("%d is largest among %d,%d,%d",b,a,b,c);
   else
      printf("%d is largest among %d,%d,%d",c,a,b,c);
 } 
 int main()
 {
   int x,y,z,largest;
   x = input();
   y = input();
   z = input();
   largest = cmp(x,y,z);
   output(x,y,z,largest);
   return 0;
 }