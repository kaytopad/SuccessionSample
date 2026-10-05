#pragma once
#include<string>
class Preson	//基底クラス（人）
{
protected:	//人の情報は外部から直接アクセスできないようにする、また、派生クラスからはアクセスできるようにする
	//なぜ？名前も年齢も人の情報であり、他の人が直接アクセスできるのはおかしいから
	string name;		//名前
	int age;			//年齢
public:
	Preson(string Name,int Age);
	void ShowInfo();	//人の情報を表示する
};

