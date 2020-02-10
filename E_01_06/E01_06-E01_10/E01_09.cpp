/*右に示すように、キーボードから読み込んだ整数値をそのまま反復して表示するプログラムを作成せよ*/
#include<iostream>
using namespace std;

int main() {
	int entered_num; //キーボードから入力される整数値
	cout << "整数値:";
	cin >> entered_num; //キーボードから整数を入力する
	cout << entered_num << "と入力しましたね。"; //入力された整数を表示する
}