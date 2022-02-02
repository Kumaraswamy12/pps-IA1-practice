#include<stdio.h>
int input()
{
  int n;
  printf("enter the numbers\n");
  scanf("%d",&n);
  return n;
}
int cmp(int a,int b,int c)
{
  int x;
  x=a>b?(a>c?a:c):(b>c?b:c);
  return x;
} 
void output(int a,int b,int c,int largest)
{
  printf("%d is the largest of %d\t%d\t%d \n",largest,a,b,c);
}
int main()
{
  int a,b,c,largest;
  a=input();
  b=input();
  c=input();
  largest=cmp(a,b,c);
  output(a,b,c,largest);
  return 0;
}