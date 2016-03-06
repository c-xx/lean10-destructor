#include <string>
using namespace std;

class Teacher
{
public:
	void setName(string _name);
	string getName();

	Teacher(string name="Jim",int age=1);
	Teacher(const Teacher &tea);
	~Teacher();

private:
	string m_strName;
	string m_strGender;
	
	int m_iScore;
};

