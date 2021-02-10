/*
キーボードから読み込んだ三つの整数の最小値を求めて表示するプログラムを作成せよ。
*/

#include <iostream>

int main()
{
	//キーボードから入力するための整数を入れる変数を3つ用意する
	int inputNumber1, inputNumber2, inputNumber3;
	//最小値を入れる変数
	int minNumber;
	//整数inputNumber1に入力することを伝える
	std::cout << "整数inputNumber1:";
	//inputNumber1に値を入力する
	std::cin >> inputNumber1;
	//整数inputNumber2に入力することを伝える
	std::cout << "整数inputNumber2:";
	//inputNumber1に値を入力する
	std::cin >> inputNumber2;
	//整数inputNumber3に入力することを伝える
	std::cout << "整数inputNumber3:";
	//inputNumber1に値を入力する
	std::cin >> inputNumber3;

	// 最小値に最初の入力の値を入れる
	minNumber = inputNumber1;
	// 2番目に入力した値が最小値より小さい場合
	if (inputNumber2 < minNumber) {
		// 新しくminNumberにinputNumber2に代入する
		minNumber = inputNumber2;
	}
	// 3番目に入力した値が最小値より小さい場合
	if (inputNumber3 < minNumber) {
		// 新しくminNumberにinputNumber3に代入する
		minNumber = inputNumber3;
	}

	//最小値の結果を出力する
	std::cout << "最小値は" << minNumber << "です\n";
}