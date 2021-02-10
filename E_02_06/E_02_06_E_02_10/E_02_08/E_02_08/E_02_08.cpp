/*二つの整数値を読み込んで、それらの値の差を表示するプログラムを作成せよ*/

#include<iostream>

int main() {
	//整数値を入力するための二つの変数を用意する。
	int integerNumber1, integerNumber2;
	//整数値の差を代入するための変数を用意する。
	int difference;
	//整数1の入力を促す
	std::cout << "整数1の値を入力してください:";
	//整数1の値を入力する
	std::cin >> integerNumber1;
	//整数2の入力を促す
	std::cout << "整数2の値を入力してください:";
	//整数2の値を入力する
	std::cin >> integerNumber2;
	//条件演算子で整数1と整数2が評価される。
	//整数1のが大きい場合は整数1-整数2の式がdifferenceに代入され、それ以外の場合は整数2-整数1がdifferenceに代入される。
	difference = integerNumber1 > integerNumber2 ? integerNumber1 - integerNumber2 : integerNumber2 - integerNumber1;
	//整数値の差を出力する
	std::cout << "整数値の差は:" << difference;
}