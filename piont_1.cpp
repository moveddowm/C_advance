#include <stdio.h>
//1. 指针用来交换
void tempchang(int *a, int *b)
{
  int temp=0;
 
  temp = *a;
  *a = *b;
  *b = temp;
  
}
//2. 指针用来返回多个参数
void maxnumber(int a[], int num, int *max, int *min)
{
  *max = *min = a[0];
  for (int i = 1; i < num; i++)
  {
    if (*max < a[i])
    {
      *max = a[i];
    }
    if (*min > a[i])
    {
      *min = a[i];
    }
  }
}
//3. 函数返回的状态
//如果除法成功返回1，否则就返回0
int divide(int a, int b, int *result)
{
  int ret = 1;
  if (b==0)
  {
    ret = 0;
  } else
  {
    *result = a / b;
  }

  return ret;
}


int main()
{
#if 0
  int a = 1, b = 2;
  tempchang(&a, &b);
  printf("a=%d,b=%d\n",a,b);
  #endif

#if 0
  int min,max;
  int c[] = {1,4,5,7,8,5,12,2,5};
  maxnumber(c, sizeof(c) / sizeof(int), &max, &min);
  printf("a=%d,b=%d\n", min, max);
  #endif

  int a = 6;
  int b = 0;
  int result = 0;
  int ret = divide(a, b, &result);

  printf("%d\n,ret=%d\n", result,ret);
}