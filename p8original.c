#include <stdio.h>
struct _complex
{
 int real,imaginary;
};
typedef struct _complex Complex;
int get_n()
{
  int n;
  printf("Enter the number of complex numbers\n");
  scanf("%d",&n);
  return n;
}
void input_n_complex(int n, Complex c[n])
{
  int i;
  printf("enter the complex number\n");
  for(i=0; i<n;i++)
    {
      scanf("%d%d",&c[i].real,&c[i].imaginary);
    }
}
Complex add_n_complex(int n, Complex c[n])
{
  Complex a;
  for(int i=0;i<n;i++)
  {
    a.real=a.real+c[i].real;
    a.imaginary=a.imaginary+c[i].imaginary;
  }
  return a;
}
void output(Complex result)
{
  printf("The sum is %d+%di",result.real,result.imaginary);
}
int main()
{
  int n;
  n=get_n();
  Complex c[20];
  input_n_complex(n,c);
  Complex result;
  result=add_n_complex(n, c);
  output(result);
  return 0;
}