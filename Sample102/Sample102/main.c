#include <stdio.h>

/*
  変数を使ったサンプル
  さまざまな値の代入と演算
*/
int main(int argc, char** argv) {
	// 変数の宣言
	int a, b;
	// 変数への値の代入
	a = 5;
	b = 2;
	// a, bの各種演算とその結果の表示
	printf("%d + %d = %d\n", a, b, a + b);
	printf("%d - %d = %d\n", a, b, a - b);
	printf("%d * %d = %d\n", a, b, a * b);
	printf("%d / %d = %d\n", a, b, a / b);
	return 0;
}