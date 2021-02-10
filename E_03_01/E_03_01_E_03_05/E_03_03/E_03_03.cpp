/*右に示すように、二つの整数値を読み込んで、小さいほうの数以上で大きいほうの数以下の全整数を小さいほうから順に表示するプログラムを作成せよ*/

#include <iostream>

int main() {
	// 入力用の変数1
	int bigNumber;
	// 整数を入力してもらう
	std::cout <<"整数A:";
	// 整数の入力
	std::cin >> bigNumber;
	// 入力用の変数2
	int smallNumber;
	// 整数を入力してもらう
	std::cout << "整数B:";
	// 整数の入力
	std::cin >> smallNumber;
	// bigNumberとsmallNumberの数を判定し、bigNumberのかずがsmallNumberの数より小さかった場合は数を入れ替える
	if (bigNumber < smallNumber) {
		// bigNumberを一時的に保存する
		int tmp = bigNumber;
		// bigNumberにsmallNumberを入れる
		bigNumber = smallNumber;
		// smallNumberにtmpをいれる
		smallNumber = tmp; 
	}
	//ループの開始
	do
	{	
		//smallNumberを出力する
		std::cout << smallNumber << " ";
		//smallNumberをインクリメントする
		smallNumber++;
	//bigNumberとsmallNumberが一致しない場合ループ
	} while (bigNumber != smallNumber);
	//大きい数を出力する
	std::cout << bigNumber <<"\n";
}