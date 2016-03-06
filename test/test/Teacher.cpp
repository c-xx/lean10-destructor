#include <iostream>
#include <string>
#include "Teacher.h"

using namespace std;


Teacher::Teacher(string name,int age)
{
	cout << "Teacher(string name,int age)" << endl;
}

Teacher::Teacher(const Teacher &tea) {
	cout << "Teacher(const Teacher &tea)" << endl;
}

Teacher::~Teacher()
{
	cout << "~Teacher()" << endl;
}

string Teacher::getName() {
	return m_strName;
}
void Teacher::setName(string name) {
	m_strName = name;
}