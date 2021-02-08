/*おみくじプログラムを作成せよ。乱数を生成して、「大吉」「中吉」「小吉」「吉」「末吉」「凶」「大凶」のいずれかを表示すること*/

#include <iostream>
#include <ctime>
#include <cstdlib>

int main() {
	//乱数用の変数を用意する
	int randomNumber;
	//乱数の種を設定
	srand(time(NULL));
	// 2までの乱数
	randomNumber = rand() % 7;
	// rondomNumberで分岐する
	switch (randomNumber)
	{
	// 0の場合
	case 0 :
		// 大吉を表示する
		std::cout << "大吉\n";
		//switch文からぬける
		break;
	// 1の場合
	case 1 :
		// 中吉を表示する
		std::cout << "中吉\n";
		//switch文からぬける
		break;
	// 2の場合
	case 2 :
		//小吉を表示する
		std::cout << "小吉\n";
		//switch文からぬける
		break;
		// 3の場合
	case 3:
		// 吉を表示する
		std::cout << "吉\n";
		//switch文からぬける
		break;
		// 4の場合
	case 4:
		// 末吉を表示する
		std::cout << "末吉\n";
		//switch文からぬける
		break;
		// 5の場合
	case 5:
		// 凶を表示する
		std::cout << "凶\n";
		//switch文からぬける
		break;
		// 6の場合
	case 6:
		// 大凶を表示する
		std::cout << "大凶\n";
		//switch文からぬける
		break;
	// デフォルトの場合
	default:
		//何もしない
		break;
	}

}