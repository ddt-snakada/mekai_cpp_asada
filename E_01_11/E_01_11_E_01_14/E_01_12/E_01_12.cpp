//右に示すように、三角形の底辺と高さを読み込んで、その面積を表示するプログラムを作成せよ。
#include<iostream>
using namespace std;

int main()
{
	double bottom_num; //三角形の底辺を入れるdoble型の変数
	double height_num; //三角形の高さを入れるdoble型の変数

	cout << "底辺 : ";
	cin >> bottom_num; //三角形の底辺を入力する
	cout << "高さ :";  
	cin >> height_num; //三角形の高さを入力する
	cout << "面積は" << bottom_num * height_num / 2 << "です。\n"; //三角形の面積を表示する
}