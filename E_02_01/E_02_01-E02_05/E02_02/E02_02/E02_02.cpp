//List2-5の最後のelseをelse if (n==0)に変更するとどうなるか検討せよ。

#include<iostream>

using namespace std;

int main()
{
	int n;              //list2-5の指定のため一文字
	cout << "整数値:";
	cin >> n;           //nに整数を入力する

	//nが0より大きい場合
	if (n > 0){
		cout << "その値は正です。\n";
	//nが0より小さい場合
	}else if (n < 0){
		cout << "その値は負です。\n";
	//問題の変更点。nが0の場合
	}else if (n == 0){
		cout << "その値は0です。\n";
	}
}

//考察 0より大きい数でなく、0より小さい数でもないものは実質0のみであり、elseからelse if(n==0) に変更しても結果は変わらない