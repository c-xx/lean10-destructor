#include <iostream>
#include <stdlib.h>
#include <string>
#include "Teacher.h"

using namespace std;


int main(void) {

	Teacher t1;
	Teacher t2(t1);

	Teacher *p = new Teacher;

	delete p;
	p = NULL;

	system("pause");
	return 0;
}