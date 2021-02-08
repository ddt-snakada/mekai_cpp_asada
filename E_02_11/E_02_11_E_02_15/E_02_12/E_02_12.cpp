/*List2-13と同様に、二つの整数値を読み込んで、小さいほうの値と大きいほうの値の両方を表示するプログラムを作成せよ。
ただし、二つの整数値が等しい場合は、右に示すように「二つの値は同じです」と表示すること*/

#include <iostream>

int main() {
	//入力用の変数を用意する
	int inputNumber1, inputNumber2;
	//入力用の変数の1つめに値を入れる
	std::cout << "整数a: "; std::cin >> inputNumber1;
	//入力用の変数の2つめに値を入れる
	std::cout << "整数b: "; std::cin >> inputNumber2;

	//最大値と最小値をいれる変数を用意する
	int min, max;
	// inputNumber2がinputNumber1より大きい場合
	if (inputNumber1 < inputNumber2) {
		//最小値にinputNumber1を代入する
		min = inputNumber1;
		//最大値にinputNumber2を代入する
		max = inputNumber2;
	//inputNumber1がinputNumbar2以上の場合
	}else{
		//最小値にinputNumber2を代入する
		min = inputNumber2;
		//最大値にinputNumber1を代入する
		max = inputNumber1;
	}
	// 入力された2つの整数値が同じ場合
	if (inputNumber1 == inputNumber2) {
		//同じであるメッセージを表示する
		std::cout << "二つの値は同じです\n";
	// 入力された2つの整数値が違う場合
	}else{
		//小さいほうの数を出力する
		std::cout << "小さいほうの値は" << min << "です。\n";
		//大きいほうの数を出力する
		std::cout << "大きいほうの値は" << max << "です。\n";
	}
}