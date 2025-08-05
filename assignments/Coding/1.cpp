#include<iostream>
using namespace std;

class Student
{
private:
    int admno;
    char sname[20];
    float english,math,science;
    float total=english+math+science;
public:
void setdata(){
    cout<<"Enter your admission number here:"<<endl;
    cin>>admno;
    cout<<"Enter your name here:"<<endl;
    cin>>sname;
    cout<<"Enter your subjects marks here:"<<endl;
    cin>>math>>science>>english;
}
float ctotal(){
    return total;
}
void showdata(){
    cout<<"Student name is : "<<sname<<endl;
    cout<<"Admissin number is : "<<admno<<endl;
    cout<<"Your english marks : "<<english<<endl;
    cout<<"Your math marks : "<<math<<endl;
    cout<<"Your science marks : "<<science<<endl;
    cout<<"Your total marks are : "<<total<<endl;
}
};
int main(){
    Student s;
    s.setdata();
    s.ctotal();
    s.showdata();
}