/*3つのint変数型に値を代入し、それらの合計と平均を求めるプログラムを作成せよ*/
#include <iostream>
using namespace std;

int main() {
	int int_num1 = 5; //int型の変数1つ目
	int int_num2 = 10;//int型の変数2つ目
	int int_num3 = 6; //int型の変数3つ目
	int int_num4 = 8; //平均を小数にするためのint型の変数3つ目

	cout << int_num1 + int_num2 + int_num3 << "が合計値です\n";     //合計値を表示する
	cout << (int_num1 + int_num2 + int_num3) / 3 << "が平均値です\n"; //平均値を表示する
	cout << (int_num1 + int_num2 + int_num4) / 3 << "が平均値です\n"; //平均値を表示するが小数点以下は切り捨てられる
}