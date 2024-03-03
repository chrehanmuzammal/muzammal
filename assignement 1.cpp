#include<iostream>
using namespace std;
class x
{
public:
int a;
public:
void set_data()
{
   a = 150;
	
}
	
};
class y
{
	protected :
		int b;
		public:
			void set_data1()
			{
				b = 255;
			}
};
class z:public x,public y
{
int c;
public:
void set_data2()
{
set_data();
set_data1();
c = 556;
}
void print_data()
{
	cout<<"data in data member of x is = "<<a<<endl;
	cout<<"data in data member of y is = "<<b<<endl;
	cout<<"data in data member of z is = "<<c<<endl;
}
};
int main()
    {
    	z obj;
    	obj.set_data2();
    	obj.print_data();
	}


	
