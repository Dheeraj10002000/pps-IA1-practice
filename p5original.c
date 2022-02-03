#include <stdio.h>
float input()
{
  float n;
  printf("enter the number to find its root\n");
  scanf("%f",&n);
  return n;
}
float my_sqrt(float n)
{
  float a=n;
  float b=0;
  float q=0.00001;
while(a-b>q)
{
  a=(a+b)/2;
  b=n/a;
}
return a;
}
void output(float n, float sqrt_result)
{
  printf("the square root pf %f is %f\n",n,sqrt_result);
}
int main()
{
  float a,b;
  a=input();
  b=my_sqrt(a);
  output(a,b);
  return 0;
}