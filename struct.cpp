#include<stdio.h>
#include<string.h>

struct Text {
  int x = 0;
  char y = 1;
  int c = 0;
};

struct Text *setting(struct Text *a)
{
  a->x = 1;
  a->c = 2;
  a->y = 3;
  return a;
}
void print(struct Text a)
{
  printf("x=%d y=%d c=%d", a.x, a.y, a.c);
}
void output(const struct Text *a)
{
  
  printf("x=%d y=%d c=%d", a->x, a->y, a->c);
}

int main()
{
  struct Text p = {0, 0, 0};
  
  output(setting(&p));
  print(*(setting(&p)));


}