#include "Student.h"
#include<iostream>
#include<string>
using namespace std;

Student::Student(string Name, int Age, string school) : Preson(Name, Age)
{
	School = school;
}

void Student::Studey() 
{
	cout << name << "は勉強している" << endl;
}

void Student::ShowDate()
{
	cout << "名前：" << name << endl;
	cout << "年齢：" << age << endl;
	cout << "学校名：" << School << endl;
}