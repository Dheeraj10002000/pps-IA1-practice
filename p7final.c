#include<stdio.h>
struct _complex
{
int real,imaginary;
}; 
typedef struct _complex Complex;
Complex input_complex()
{
  Complex a;
  printf("Enter a complex number");
  scanf("%d%d",&a.real,&a.imaginary);
  return a ;
}
Complex add(Complex a, Complex b)
{
  Complex c;
  c.real=a.real+b.real;
  c.imaginary=a.imaginary+b.imaginary;
  return c;
}
void output(Complex a, Complex b, Complex c)
{
printf("%d+%di+%d+%di=%d+%di",a.real,a.imaginary,b.real,b.imaginary,c.real,c.imaginary);
}
int main()
{
  Complex a,b,c;
  a=input_complex();
  b=input_complex();
  c=add(a,b);
  output(a,b,c);
    return 0;
}