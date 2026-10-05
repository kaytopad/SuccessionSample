#pragma once
#include"Preson.h"
#include<string>
using namespace std;
class Teacher :public Preson
{

private:
	string Subject;	//教科名
public:
	Teacher(string Name, int Age, string subject);
	void Teach();	//教える
	void ShowDate();
};

