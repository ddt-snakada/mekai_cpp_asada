/*以下に示すプログラムを作成せよ
・1桁の正の整数値(すなわち1以上9以下の値)をランダムに生成して表示。
・1桁の負の整数値(すなわち-9以上-1以下の値)をランダムに生成して表示。
・2桁の正の整数値(すなわち10以上99以下の値)をランダムに生成して表示。
*/

#include<iostream> //標準入出力を提供するライブラリ
#include<ctime>    //Cスタイルの時間の標準ライブラリが含まれている
#include<cstdlib>  //疑似乱数を生成するrand() srand()が含まれているライブラリ
using namespace std;

int main()
{
	int positiveOneDigitInteger;                 //1桁の正の整数値を入れる変数
	int negativeOneDigitInteger;                 //1桁の負の整数値を入れる変数
	int positiveTwoDigitInteger;                 //2桁の正の整数値を入れる変数
	srand(time(NULL));                          //rand関数の種を設定する

	//0から8の正の整数値をランダムに生成し1を足して以上9以下の値を作る
	positiveOneDigitInteger = (rand() % 9) + 1;  
	//0から8の正の整数値をランダムに生成しマイナスを付与し、1を引き -9以上-1以下の値を作る
	negativeOneDigitInteger = -(rand() % 9) - 1; 
	//0から89の正の整数値をランダム生成し、10を足し10以上99以下の値を作る
	positiveTwoDigitInteger = (rand() % 90) + 10;

	//1桁の正の整数値を表示
	cout << "1桁の正の整数値は" << positiveOneDigitInteger <<"\n";   
	//1桁の負の整数値を表示
	cout << "1桁の負の整数値は" << negativeOneDigitInteger << "\n";  
	//2桁の正の整数値を表示
	cout << "2桁の正の整数値は" << positiveTwoDigitInteger << "\n"; 
}