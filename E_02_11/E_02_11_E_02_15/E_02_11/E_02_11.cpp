/*
キーボードから読み込んだ三つの整数の中央値を求めて表示するプログラムを作成せよ。
＊例えば2,3,1の中央値は2で1,2,1の中央値は1で、3,3,3の中央値は3である。
*/

#include <iostream>

int main()
{
	//キーボードから入力するための整数を入れる変数
	int inputNumber1, inputNumber2, inputNumber3;
	//最小値を入れる変数
	int medianNumber;
	//整数inputNumber1に入力することを伝える
	std::cout << "整数inputNumber1:";
	//inputNumber1に値を入力する
	std::cin >> inputNumber1;
	//整数inputNumber2に入力することを伝える
	std::cout << "整数inputNumber2:";
	//inputNumber1に値を入力する
	std::cin >> inputNumber2;
	//整数inputNumber3に入力することを伝える
	std::cout << "整数inputNumber3:";
	//inputNumber1に値を入力する
	std::cin >> inputNumber3;
	//inputNumber1がinputNumber2以上の場合
	if (inputNumber2 <= inputNumber1){
		//inputNumber1がinputNumber3以下の場合
		if (inputNumber1 <= inputNumber3) {
			//中央値にinputNumber1をいれる
			medianNumber = inputNumber1;
		//inputNumber1がinputNumber3より大きい場合
		}else{
			//中央値にinputNumber3をいれる
			medianNumber = inputNumber3;
		}
	//inputNumber2がinputNumber1より大きい場合
	}else{
		//inputNumber2がinputNumber3以下の場合
		if (inputNumber2 <= inputNumber3) {
			//中央値にinputNumber2をいれる
			medianNumber = inputNumber2;
		//inputNumber2がinputNumber3より大きい場合
		}else{
			//中央値にinputNumber3をいれる
			medianNumber = inputNumber3;
		}
	}
	//中央値の結果を出力する
	std::cout << "最小値は" << medianNumber << "です\n";
}