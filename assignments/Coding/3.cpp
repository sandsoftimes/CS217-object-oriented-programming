#include <iostream>
using namespace std;
class Rectangle1;
class Rectangle2;
class Rectangle3;
class Rectangle4;
class Rectangle1{
	private:
		int length;
		int breadth;
	public:
		Rectangle1(int len, int brea){
			length = len;
			breadth = brea;
		}
	void showData(){
		cout<<"Length of Rectangle 1:"<<length;
		cout<<"Breadth of Rectangle 1:"<<breadth;
		}
		friend void SumAll(Rectangle1, Rectangle2, Rectangle3, Rectangle4);
		
		
	
};
class Rectangle2{
	private:
		int length;
		int breadth;
	public:
		Rectangle2(int len, int brea){
			length = len;
			breadth = brea;
			
		}
	void showData(){
		cout<<"Length of Rectangle 2:"<<length;
		cout<<"Breadth of Rectangle 2:"<<breadth;
	}
	friend void SumAll(Rectangle1, Rectangle2, Rectangle3, Rectangle4);	
		
	
};
class Rectangle3{
	private:
		int length;
		int breadth;
	public:
		Rectangle3(int len, int brea){
			length = len;
			breadth = brea;
			
		}
	void showData(){
		cout<<"Length of Rectangle 3:"<<length;
		cout<<"Breadth of Rectangle 3:"<<breadth;
	}
	friend void SumAll(Rectangle1, Rectangle2, Rectangle3, Rectangle4);	
		
};
class Rectangle4{
	private:
		int length;
		int breadth;
	public:
		Rectangle4(int len, int brea){
			length = len;
			breadth = brea;
			
		}
	void showData(){
		cout<<"Length of Rectangle 4:"<<length;
		cout<<"Breadth of Rectangle 4:"<<breadth;
	}
	friend void SumAll(Rectangle1, Rectangle2, Rectangle3, Rectangle4);
		
};
void SumAll(Rectangle1 object1, Rectangle2 object2, Rectangle3 object3, Rectangle4 object4){
	int Sum;
	cout<<"Sum of lengths of all rectangles: "<<object1.length+object2.length+object3.length+object4.length<<endl;
	cout<<"Sum of breadths of all rectangles: "<<object1.breadth+object2.breadth+object3.breadth+object4.breadth<<endl;
	
}
int main(){
	Rectangle1 a(2, 3);
	Rectangle2 b(6, 3);
	Rectangle3 c(9, 2);
	Rectangle4 d(10, 12);
	SumAll(a, b, c, d);
	
	
	
	
	
}
