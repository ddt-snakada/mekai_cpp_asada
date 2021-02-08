/*変数aがdouble型で、変数bがint型であるとする。以下の代入によって、それぞれの変数の値はどのようになるか説明せよ a = b = 1.5*/

/*答え b=1.5が先に評価されbはint型なのでb = 1となる
 そして、b = 1 の結果が aに代入され、a = 1が代入される。
*/

#include <iostream>

int main() {
//検証用プログラム
// double型のa
	double a;
	// int型のb
	int b;
	// 検証用の式
	a = b = 1.5;
	// a を出力する
	std::cout << a;
	// b を出力する
	std::cout << b;
}