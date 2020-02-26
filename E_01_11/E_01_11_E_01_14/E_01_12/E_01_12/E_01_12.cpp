//右に示すように、三角形の底辺と高さを読み込んで、その面積を表示するプログラムを作成せよ。
#include<iostream>
using namespace std;

int main()
{
	double bottomNumber; //三角形の底辺を入れるdoble型の変数
	double heightNumber; //三角形の高さを入れるdoble型の変数

	cout << "底辺 : ";
	cin >> bottomNumber; //三角形の底辺を入力する
	cout << "高さ :";  
	cin >> heightNumber; //三角形の高さを入力する

	//底辺と高さをかけて2で割り、三角形の面積を表示する
	cout << "面積は" << bottomNumber * heightNumber / 2 << "です。\n"; 
}