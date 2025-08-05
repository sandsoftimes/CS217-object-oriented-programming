#include <iostream>
using namespace std;
class Person;
class Teacher;
class Student;
class Publications;

class Person{
	public:
	string name;
	int idCard;
	int cellphone;
	virtual void showData(){
		cout<<"name:"<<name;
		cout<<"idCard:"<<idCard;
		cout<<"cellphone:"<<cellphone;
	}
	
};
class Teacher: public Person{
	public:
	string deptName;
	int empID;
	
	
	
};
class Student: public Person{
	public:
		int rollno;
		int semFee;
		
};
class Publications: public Teacher, Student{
	public:
		int noOfPublications;
		
	
	
};
int main(){
	Publications a;
	a.showData();
	//a.name;
	return 0;
// Yes there is a chance of amibguity as i have tested amguity above.	
}
