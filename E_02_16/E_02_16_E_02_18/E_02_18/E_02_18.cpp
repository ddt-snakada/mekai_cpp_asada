/* 以下のif文が何を行うのかを説明せよ
if (a = 0) c = 3;/

/*答え a =0 の代入演算子が評価されa に0が入る。
 そしてif 0 はfalseとなり、if節の中にある c = 3は実行されない。
*/

#include <iostream>

int main() {
//検証用プログラム
int a;
int c;
//検証用のプログラム文
 if (a = 0) c = 3;
 // cに値が入っていないためエラーになる
 std::cout << c;
}