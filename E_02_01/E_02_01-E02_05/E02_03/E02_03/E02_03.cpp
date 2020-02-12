//演習2-3　二つのint型変数a,bに値を読みこんで、その大小関係を以下のいずれかで表示するプログラムを作成せよ。
//『aのほうが大きいです。』『bのほうが大きいです。』『aとbは同じ値です。』

#include<iostream>

int main()
{
	int a; //問題文の指定のa
	int b; //問題文の指定のb
	std::cout << "aの値は:";
	std::cin >> a; //aの値を読み込む
	std::cout << "bの値は:";
	std::cin >> b; //bの値を読み込む

	//aの値がbの値より大きい場合
	if (a > b)
		std::cout << "aのほうが大きいです\n";
	//bの値がaの値より大きい場合
	else if (b > a)
		std::cout << "bのほうが大きいです\n";
	//aとbの値が同じ場合
	else if (a == b)
		std::cout << "aとbは同じ値です。";
}