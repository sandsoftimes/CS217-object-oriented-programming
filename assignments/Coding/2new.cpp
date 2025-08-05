#include <iostream>
using namespace std;

double M(double *x, double *y,double *z){
 double Pd;
 Pd=(*x * *y * *z);
 return Pd;
}



int main()
{

    double a,b,c;

 cout<<"Enter your 1st Value:";
 cin>>a;
 cout<<"Enter your 2nd Value:";
 cin>>b;
 cout<<"Enter your 3rd Value:";
 cin>>c;
 cout<<" ......Multiplication....." <<endl <<endl;

 cout<<"For two paratemeterize Multipication:"<<endl<<M(&a,&b,&c)<<endl;
//  cout<<"For three paratemeterize Multipication:"<<endl<<M1(&a,&b,&c)<<endl;

 cout<<endl;
 return 0;
}





