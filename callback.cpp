#include <stdio.h>

int Callback_1()
{
  printf("callback 1\n");
  return 0;
}

int Callback_2()
{
  printf("Callback 2\n");
  return 0;
}

void Handle(int (*Callback)())
{
  printf("enter \n");
  Callback();
  printf("leave \n");
}
int main()
{

  Handle(Callback_1);
  Handle(Callback_2);
  return 0;
}
