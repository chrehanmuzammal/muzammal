#include <iostream>
using namespace std;
class X
{
	public:
		int a;
		public:
			X(int x)
			{
				a = x;
			}
};
class Y : public X
{
	private:
		int b;
		public:
			Y(int x,int y) : X(x)
			{
				b = y;
			}
			void print_data()
			{
				cout<<"Data in Data Member of X is = "<<a<<endl;
		        cout<<"Data in Data Member of Y is = "<<b<<endl;
			}
};

int main()
{
	Y obj(23,29);
	obj.print_data();
	
}
