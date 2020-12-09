//右に示すように整数値を読み込んで、その絶対値を求めて表示するプログラムを作成せよ。
#include<iostream>

using namespace std;

int main() 
{
	//整数値を入力するための変数
	int enterdNumber; 
	//整数値入力を促す表示
	cout << "整数値:";
	//整数値を入力する
	cin >> enterdNumber;

	//0以上かの条件
	if (enterdNumber >= 0){
		//0以上であれば、そのまま表示する
		cout << "その絶対値は" << enterdNumber << "です\n";
	//0より小さい条件、つまり負の数
	}else{
		//0より小さい場合は-1を入力された整数値にかける
		cout << "その絶対値は" << -1 * enterdNumber << "です\n";
	}
}