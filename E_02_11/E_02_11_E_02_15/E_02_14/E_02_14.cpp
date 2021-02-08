/*0,1,2のいずれかの値の乱数を生成し、0であれば「グー」、1であれば「チョキ」、2であれば「パー」と表示するプログラムを作成せよ*/

#include <iostream>
#include <ctime>
#include <cstdlib>

int main() {
	//乱数用の変数を用意する
	int randomNumber;
	//乱数の種を設定
	srand(time(NULL));
	// 2までの乱数
	randomNumber = rand() % 3;
	// rondomNumberで分岐する
	switch (randomNumber)
	{
	// 0の場合
	case 0 :
		// グーを表示する
		std::cout << "グー\n";
		//switch文からぬける
		break;
	// 1の場合
	case 1 :
		// チョキを表示する
		std::cout << "チョキ\n";
		//switch文からぬける
		break;
	// 2の場合
	case 2 :
		//パーを表示する
		std::cout << "パー\n";
		//switch文からぬける
		break;
	// デフォルトの場合
	default:
		//何もしない
		break;
	}

}