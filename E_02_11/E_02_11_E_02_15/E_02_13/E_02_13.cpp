/*二つの整数値を読み込んで降順(大きい順)に並び替えるプログラムを作成せよ*/

#include <iostream>

int main() {
	//入力用の変数を用意する
	int inputNumber1, inputNumber2;
	//入力用の変数の1つめに値を入れる
	std::cout << "一つ目の整数: "; std::cin >> inputNumber1;
	//入力用の変数の2つめに値を入れる
	std::cout << "二つ目の整数: "; std::cin >> inputNumber2;

	// inputNumber2がinputNumber1より大きい場合
	if (inputNumber1 < inputNumber2) {
		// 一時的変数を用意する
		int tmp = inputNumber1;
		// inputNumber1とinputNumber2を入れ替える
		inputNumber1 = inputNumber2;
		// inputNumber2に保持していたtmpを代入する
		inputNumber2 = tmp;
	}
		//大きいほうの数を出力する
		std::cout << inputNumber1 << "\n";
		//小さいほうの数を出力する
		std::cout << inputNumber2 << "\n";
}