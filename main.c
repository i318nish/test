#include <stdio.h>
#include <stdlib.h>  // exit関数を使用するために必要
#include <math.h>    // sqrt関数を使用するために必要

double myRoot(double x) // x の平方根を返す関数。x >= 0 ではないとき exit(1) とする。
{
  if (x < 0) {//x <= 0 の条件を x < 0 に変更した。
    exit(1);
  }
  return sqrt(x);
}

int main(void)
{
  int i = 0;  // i の初期化が必要
  double *x = (double *)malloc(sizeof(double) * 101);  // 配列の要素数は 101 である必要がある

  while (i <= 100) {
    x[i] = myRoot((double)i);
    i++;
  }

  // 以下は確認用(このままで良い)
  printf("x[0]=%f\n", x[0]);
  printf("x[1]=%f\n", x[1]);
  printf("x[2]=%f\n", x[2]);
  printf("x[3]=%f\n", x[3]);
  printf("x[4]=%f\n", x[4]);
  printf("x[99]=%f\n", x[99]);
  printf("x[100]=%f\n", x[100]);

  free(x);
  return 0;
}
