#pragma once
#include <string>
#include "Preson.h"
using namespace std;
class Student : public Preson
{
private:
	string School;	//学校名
public:
	Student(string Name, int Age, string school);
	void Studey();	//勉強する
	void ShowDate();
};

