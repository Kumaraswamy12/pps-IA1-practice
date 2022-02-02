#include<stdio.h>
typedef struct _complex
{
  float real,imaginary;
}Complex;
Complex input_complex()
{
  Complex temp;
  printf("Enter the complex number:\n");
  scanf("%f%f",&temp.real,&temp.imaginary);
  return (temp);
}
Complex add(Complex a, Complex b)
{
    Complex temp;
    temp.real=a.real+b.real;
    temp.imaginary=a.imaginary+b.imaginary;
    return (temp);
}
void output(Complex a, Complex b, Complex c)
{
    printf("%f+i%f + %f+i%f = %f+i%f\n",a.real,a.imaginary,b.real,b.imaginary,c.real,c.imaginary);
}
int main()
{
  Complex c1,c2,r;
  c1=input_complex();
  c2=input_complex();
  r=add(c1,c2);
  output(c1,c2,r);
  return 0;
}