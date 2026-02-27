#include <iostream>
using namespace std;
class Account{
	private:
		int account_no;
		double account_balance;
		int security_code;
		static int count;
	public:
		void initialize(int acc_no, double balance, int sec_code){
			account_no = acc_no;
			account_balance = balance;
			security_code =  sec_code;
			count++;
		}
		void display(){
			cout<<"Account No: "<<account_no<<endl;
			cout<<"Balance: "<<account_balance<<endl;
			cout<<"Security Code: "<<security_code<<endl;
		}
		static void showCount(){
			cout<<"Total Accounts Created: "<<count <<endl;
		}
};
int Account::count=0;
int main(){
	Account a1,a2,a3;
	a1.initialize(101,50000,1234);
	a2.initialize(102,80000.45,1654);
	a3.initialize(103,70000.12,6473);
	a1.display();
	a2.display();
	a3.display();
	
	Account::showCount();  //calling static func
	return 0;
}