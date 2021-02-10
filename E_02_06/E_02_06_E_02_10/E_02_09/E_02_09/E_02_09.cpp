/*右に示すように、二つの整数値を読み込んで、それらの値の差が10以下であれば「それらの差は10以下です。」
と表示し、そうでなければ「それらの差は１１以上です。」と表示するプログラムを作成せよ。
*/

#include<iostream>
int main() {
	// 整数値を入力するための二つの変数を用意する
	int integerNumberA, integerNumberB;
	//整数値の差を代入するための変数を用意する
	int difference;
	//整数Aの入力を促す
	std::cout << "整数A:";
	//整数Aの値を入力する
	std::cin >> integerNumberA;
	//整数Bの入力を促す
	std::cout << "整数B:";
	//整数Bの値を入力する
	std::cin >> integerNumberB;
	//条件演算子で整数1と整数2が評価される。
	//整数1のが大きい場合は整数1-整数2の式がdifferenceに代入され、それ以外の場合は整数2-整数1がdifferenceに代入される。
	difference = integerNumberA - integerNumberB ? integerNumberA - integerNumberB : integerNumberB - integerNumberA;
	
	//差が10以下の場合の出力処理をする。
	if (difference <= 10) {
		//差が10以下であることを出力する
		std::cout << "それらの差は10以下です。";
	}//差が11以上の場合の出力処理
	else if(difference >= 11) {
		//差が11以上であることを出力する
		std::cout << "それらの差は11以上です。";
	}
	
}