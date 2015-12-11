/**
ステートパターンを実装するプログラム

パターン2：
状態を表すクラスを作成する。
Humanにその状態を入れ替え可能にする。
状態のクラスは抽象クラスにし、状態ごとに継承してクラスを作成する。
そのシングルトンなインスタンスをキャラクターに持たせ、状態に応じて入れ替える。


state pattern test
テーマ： 学生
状態： 勉強・休み・食事
*/

#include <iostream>
#include "Human.h"


int main()
{
	Human kettle;

	while (true)
	{
		kettle.life();
		rewind(stdin);
		getchar();
	}
	// todo

	return 0;
}