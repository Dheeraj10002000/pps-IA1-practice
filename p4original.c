#include <stdio.h>
int input_array_size()
{
    int a;
    printf("Enter the size of the array\n");
    scanf("%d",&a);
    return a;
}
void input_array(int a, int b[a])
{
  for(int i=0;i<a;i++)
  {
    printf("enter the values into the array\n");
    scanf("%d",&b[i]);

  }
}
int sum_n_array(int n, int a[n])
{
  int sum=0;
  for(int i=0; i<n; i++)
  {
    sum = sum + a[i];
  }
return sum;
}
void output(int n,int a[n],int sum)
{
  int i;
  for(i=0;i<n-1;i++)
  {
    printf("%d+",a[i]);
  }
  printf("%d is %d\n",a[i],sum);
}
int main()
{
  int a,s;
  a=input_array_size();
  int b[a];
  input_array(a,b);
  s=sum_n_array(a,b);
  output(a,b,s);
  return 0;
}