#include<stdio.h>
int input();
int add(int a, int b);
void output(int a, int b, int sum);
int main()
{
  int a,b,sum;
  a=input();
  b=input();
  sum=add(a,b);
  output(a,b,sum);
  return 0;
}
int input()
{
  int n;
  printf("enter the number\n");
  scanf("%d",&n);
  return n;
}
int add(int a, int b)
{
  int sum=a+b;
  return sum;
}
void output(int a, int b, int sum)
{
 printf("the sum of %d and %d is %d",a,b,sum);
}
