#include <iostream>
using namespace std;

class Value{
	private:
		int x;
	public:
		Value(int a){
		x = a;
	}
	
int getValue() const{
	return x;
}
};
int main(){
	const Value v(6);
	cout<<"Value: "<<v.getValue()<<endl;
	return 0;
}