#include <iostream>
using namespace std;
class Employee{
	private:
		string empName;
		int empNumber;
	public:
		void getData(string empname, int empnumber){
			empName = empname;
			empNumber = empnumber;
			
			
		}
		void putData(){
			cout<<empName<<endl;
			cout<<empNumber<<endl;
		}
};
class Manager: public Employee{
	private:
		char title;
		double clubdues;
	public:
		void getData(char Title, double Clubdues){
			title = Title;
			clubdues = Clubdues;
		}
		void putData(){
			cout<<title<<endl;
			cout<<clubdues<<endl;
		}
};
class Scientist: public Employee{
	private:
		int publications;
	public:
		void getData(int Publications){
			publications = Publications;
			
		}
		void putData(){
			cout<<publications<<endl;
		}
		
	 
};
class Programmer: public Employee{
	private:
		double salary;
		string expertise;
	public:
		void getData(double Salary, string Expertise){
			salary = Salary;
			expertise = Expertise;
			}
		void putData(){
			cout<<salary<<endl;
			cout<<expertise<<endl;
		}
};

int main(){
	Programmer a;
	
	a.getData(27, "Ali");
	a.putData();

	
}
