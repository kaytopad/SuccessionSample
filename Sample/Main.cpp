#include <iostream>
#include<string>
#include "Student.h"
#include "Teacher.h"
using namespace std;

int main(void) 
{
	string studentName;
	int studentAge;
	string studentSchool;
	string teacherName;
	int teacherAge;
	string teacherSubject;

	cout << "学生の名前と年齢,学校名を入力してください：" << endl;
	cin >> studentName;
	cin >> studentAge;
	cin >> studentSchool;
	cout << "教師の名前と年齢,教科名を入力してください：" << endl;
	cin >> teacherName;
	cin >> teacherAge;
	cin >> teacherSubject;

	Student student(studentName, studentAge, studentSchool);
	Teacher teacher(teacherName, teacherAge, teacherSubject);

	student.ShowDate();
	student.Studey();
	
	teacher.ShowDate();
	teacher.Teach();
    return 0;
}