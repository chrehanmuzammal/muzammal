#include<iostream>
using namespace std;
class student
{
protected :
string name;
int roll_no;
int avg;
public :
void set_data()
{
	name = "Rehan ";
	roll_no = 42;
	avg = 10;
}
void print_data()
{
	cout<<"name of the student is = "<<name<<endl;
	cout<<"roll_no of the student is = "<<roll_no<<endl;
	cout<<"avg of the student is = "<<avg<<endl;
	}	
};
class graduate_student : public student
{
protected :
int semester;
int year;
public:
   void set_data1()
   {
   set_data();
   semester = 2;
   year = 1;
}
   void print_data1()
{
   	 print_data();
   	cout<<"semester of students is = "<<semester<<endl;
   	cout<<"year of study of  students is = "<<year<<endl;
}
   	
};
class MS_Student : public Graduate_Student
{
	int newid;
	public :
		void set_data2()
		{
			set_data1();
			newid = 123456;
		}
		void print_data2()
		{
			print_data1();
			cout<<"new id of student is = "<<newid<<endl;
		}
};
int main()
{
	student Rehan;
	Rehan.set_data();
	Rehan.print_data();
	
	  cout<<" ___________ "<<endl;
	  cout<<"             "<<endl;
	  
	  MS_student Rehan;
	  Rehan.set_data2();
	  Rehan.print_data2();
	  
	  
}
