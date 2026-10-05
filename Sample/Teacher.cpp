#include "Teacher.h"
#include <iostream>
using namespace std;

Teacher::Teacher(string Name, int Age, string subject) : Preson(Name, Age)
{
	Subject = subject;
}

void Teacher::Teach()
{
	cout << name << "は" << Subject << "を教えている" << endl;
}

void Teacher::ShowDate()
{
	cout << "名前：" << name << endl;
	cout << "年齢：" << age << endl;
	cout << "教科名：" << Subject << endl;
}