#include <iostream>
using namespace std;
class Student{
	private:
		string name;
		int id;
		float cgpa;
	public:
		Student(){
			name = "";
			id = 0;
			cgpa = 0;
			cout<<"default constructor invoked!"<<endl;
		}
		Student(string n, int i, float c){
			name = n;
			id = i;
			cgpa = c;
			cout<<"Parameterized constructor invoked!"<<endl;
		}
	
		void Display(){
			cout<<"Name: "<<name<<endl<<"ID: "<<id<<endl<<"CGPA: "<<cgpa<<endl;
		}
		void setData(string n, int i, float c){
			name = n;
			id = i;
			cgpa = c;
		}
		~Student(){
			cout<<"destructor invoked"<<endl;
		}

	
};
int main(){
			Student s1;
			s1.Display();
			Student s2("Ali", 12, 3.5);
			s2.Display();
			Student s3 = s2;
			s3.Display();			
		}














