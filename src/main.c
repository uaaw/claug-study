//変数について学ぼう
#include <stdio.h>
/* いつもstudioって書いてしまうわら*/
int main(void)
{
  int a, b;
  /*
  int a;
  int b;
  //でもok*/
  
  b = a + 100;
  printf("aの数値は%dです。 \n", a);
  printf("bの数値は%dです。\n", b);
//%dは十進数のやつらしい
  return 0;
}