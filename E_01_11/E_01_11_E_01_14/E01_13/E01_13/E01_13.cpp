/*以下に示すプログラムを作成せよ
・1桁の正の整数値(すなわち1以上9以下の値)をランダムに生成して表示。
・1桁の負の整数値(すなわち-9以上-以下の値)をランダムに生成して表示。
・2桁の正の整数値(すなわち10以上99以下の値)をランダムに生成して表示。
*/

#include<iostream> //標準入出力を提供するライブラリ
#include<ctime>    //Cスタイルの時間の標準ライブラリが含まれている
#include<cstdlib>  //疑似乱数を生成するrand() srand()が含まれているライブラリ
using namespace std;

int main()
{
	int positive_one_digit_int;                 //1桁の正の整数値を入れる変数
	int negative_one_digit_int;                 //1桁の負の整数値を入れる変数
	int positive_two_digit_int;                 //2桁の正の整数値を入れる変数
	srand(time(NULL));                          //rand関数の種を設定する
	positive_one_digit_int = (rand() % 9) + 1;  //9未満の正の整数値をランダムに生成し1を足して代入する
	negative_one_digit_int = -(rand() % 9) - 1; //9未満の正の整数値をランダムに生成しマイナスを付与し、1を引き代入する
	positive_two_digit_int = (rand() % 90) + 10;//90未満の正の整数値をランダム生成し、10を足し代入する
	
	cout << "1桁の正の整数値は" << positive_one_digit_int <<"\n";   //1桁の正の整数値を表示
	cout << "1桁の負の整数値は" << negative_one_digit_int << "\n";  //1桁の負の整数値を表示
	cout << "2桁の正の整数値は" << positive_two_digit_int << "\n";  //2桁の正の整数値を表示
}