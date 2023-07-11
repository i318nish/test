#include <stdio.h>

int main(void)
{
  int n;

  printf("n = ");
  scanf("%d", &n);

  if( (n & 1) == 0 ){ //(n & 1 == 0 )から((n & 1) == 0)に変更、 n & 1 の計算を優先して行うように括弧を追加した.
    printf("%d は偶数です\n", n);
  }
  return 0;
}
