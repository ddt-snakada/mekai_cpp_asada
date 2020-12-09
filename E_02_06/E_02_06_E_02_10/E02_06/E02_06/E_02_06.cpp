/*キーボードから読み込んだ点数に応じて、優/良/可/不可を判定して表示するプログラムを作成せよ。判定は以下のように行うこと。
0～59→不可/60～69→可/70～79→良/80～100→優
*/

#include<iostream>

int main(){
	//キーボードから入力される点数を入れる変数
	int testPoint;
	//キーボードから点数を入力する
	std::cin >> testPoint;
	//0以上60未満の場合、不可を出力
	if (testPoint >= 0 && testPoint < 60) {
		//不可を出力する
		std::cout << "不可";
	}//60以上70未満の場合、可を出力
	else if ( testPoint >=60 && testPoint < 70) {
		//可を出力する
		std::cout << "可";
	}//70以上80未満の場合、良を出力
	else if (testPoint >=70 && testPoint < 80){
		//良を出力する
		std::cout << "良";
	}//80以上100以下の場合、優を出力
	else if (testPoint >= 80 && testPoint <=100) {
		//優を出力する
		std::cout << "優";
	}

}