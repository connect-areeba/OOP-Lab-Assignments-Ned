#include <iostream>
using namespace std;
class Student{
	private:
		string name;
		int id;
		float cgpa;
	public:
		void Display(){
			cout<<"Name: "<<name<<endl<<"ID: "<<id<<endl<<"CGPA: "<<cgpa<<endl;
		}
		string getName(){
			return name;
		}
		int ID(){
			return id;
		}
		float getCGPA(){
			return cgpa;
		}
		void setName(string name){
			this->name = name;     //"this" is a pointer variable which is the part of every class
		}
		bool setCGPA(float c){
			if(c>=1.0 && c<=4.0){
				cgpa = c;
				return true;
			}
			cgpa = 0;
			return false;
		}
		bool setID(int id){
			if(id > 0&& id <= 350){
				this-> id = id;
				return true;			
		}
		this-> id =0;
		return false;
	}
};
int main(){
			Student s1;
			
			cout<<"====Student 1===="<<endl;
			
			s1.setName("Areeba");
			s1.setCGPA(4.0);
			s1.setID(12);
			s1.Display() ;
			
			Student s2;
			
		    cout<<"====Student 2===="<<endl;

			s2.setName("Eshba");
			s2.setCGPA(3.7);
			s2.setID(15);
			s2.Display();
			
		}














