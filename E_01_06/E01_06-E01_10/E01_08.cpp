/*int型の変数に実数値の初期化子を与えるとどうなるか。プログラムを作成して確認せよ。*/
#include <iostream>
using namespace std;

int main() {
	int int_num = 5; //int型の変数に初期化子を与える。
	cout << int_num << "が初期化です\n";     //初期化子を与えたものを表示する。
}

//初期化子が与えられると途中で変数を代入しなくても値が表示される。