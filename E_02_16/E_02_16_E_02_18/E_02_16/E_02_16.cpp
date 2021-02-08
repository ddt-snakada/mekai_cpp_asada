/*月を1~12の整数値として読み込んで、それに対応する季節を表示するプログラムを作成せよ*/

#include <iostream>

int main() {
	//月用の変数を用意する
	int monthNumber;
	//1~12の整数を入力してもらう
	std::cout << "1～12を入力してください\n";
	//月用の変数に数を代入する
	std::cin >> monthNumber;

	//monthNumberで分岐する
	switch (monthNumber)
	{
	// 1の場合
	case 1:
	// 2の場合
	case 2:
	//12 の場合
	case 12:
		// 冬を表示する
		std::cout << "冬\n";
		//switch文からぬける
		break;
	// 3の場合
	case 3:
	// 4の場合
	case 4:
	// 5の場合
	case 5:
		// 春を表示する
		std::cout << "春\n";
		//switch文からぬける
		break;
	// 6の場合
	case 6:
	// 7の場合
	case 7:
	// 8の場合
	case 8:
		//夏を表示する
		std::cout << "夏\n";
		//switch文からぬける
		break;
	// 9の場合
	case 9:
	// 10の場合
	case 10:
	// 11の場合
	case 11:
		// 吉を表示する
		std::cout << "秋\n";
		//switch文からぬける
		break;
	// デフォルトの場合
	default:
		//何もしない
		break;
	}

}