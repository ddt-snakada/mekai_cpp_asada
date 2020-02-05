/*右に示すように、キーボードから読み込んだ整数値に10を加えた値と10を減じた値を出力するプログラムを作成せよ。*/

#include<iostream>
using namespace std;

int main(){
	int entered_num; //キーボードから入力される整数値の変数
	cout << "整数値:";
	cin >> entered_num; //キーボードから値を入力する
	cout << "10を加えた値は" << 10 + entered_num << "です。\n"; //10加えた値を表示する
	cout << "10を減じた値は" << entered_num - 10 << "です。\n"; //10引いた値を表示する
}