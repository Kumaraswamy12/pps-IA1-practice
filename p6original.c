#include<stdio.h>
void input_two_strings(char *a,char *b)
{
    printf("Enter two strings:\n");
    scanf("%s%s",a,b);
}
int strcmp(char *a,char *b)
{
  for(int i=0;a[i]!='\0' || b[i]!='\0';i++)
  {
    if(b[i]>a[i])
       return 1;
    else if(a[i]>b[i])
       return -1;
  }
  return 0;
}
void output(char *a,char *b,int result)
{
    if(result==1)
      printf("%s is greater than %s\n",b,a);
    else if(result==-1)
      printf("%s is greater than %s\n",a,b);
    else
      printf("%s is equal to %s\n",a,b);
}
int main(){
    char a[20],b[20];
    input_two_strings(a,b);
    int r=strcmp(a,b);
    output(a,b,r);
    return 0;
}