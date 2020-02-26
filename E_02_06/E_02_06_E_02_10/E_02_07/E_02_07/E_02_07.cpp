/*二つの実数値を読み込んで、大きいほうを表示するプログラムを作成せよ*/

#include<iostream>

int main() {
	//実数値を入力するための二つの変数を用意する。
	double realNumber1;
	double realNumber2;
	//大きい実数を代入するための変数を用意する。
	double bigNumber;
	//実数1の値を入力する。
	std::cout << "実数1の値を入力してください:";
	std::cin >> realNumber1;
	//実数2の値を入力する。
	std::cout << "実数2の値を入力してください:";
	std::cin >> realNumber2;
	//条件演算子で実数1と実数2が評価され大きい実数がbigNumberに代入される。
	//問題文に指定されていないが、値が同じ場合は条件がFALSEになり実数2の値が出力される
	bigNumber = realNumber1 > realNumber2 ? realNumber1 : realNumber2;
	//大きいほうの値を出力する
	std::cout << "大きいほうの値は" << bigNumber;
}