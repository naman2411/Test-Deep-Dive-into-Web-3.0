#include <algorithm>
#include <iostream>
#include <vector>
#include <math.h>
using namespace std;
class person {
	public :
	string name ;
int salary ;
string getname (){
	return name ;
}
int getsalary(){
	return salary ;
}
void setname (string s){
	name = s ;
}
	void setsalary (int sa){
	this->salary = sa ;
}
 

};
class homeloan:public person {

public : 
int interestrate ;
int money ;
int durationy ;
int emiy ;

void setinterestrate (int i){
	this->interestrate = i ;
}
void setmoney (int m){
	this->money = m ;
}
void setdurationy (int d){
	this->durationy = d ;
}
void setemiy (int e){
	this->emiy = e ;
}
public:
void displaybill (){
	cout <<"Name:"<<name <<endl;
	cout << "Salary:"<<salary<<endl;
	cout <<"Interest Rate:"<<interestrate<<endl;
	cout <<"Amount Required:"<<money<<endl;
	cout <<"Time for which it is needed(in years):"<<durationy<<endl;
    cout <<"Emi to be given (per year):"<<emiy<<endl;
}

};
// class goldloan:public borrower {
// 	public : int interestrate ;
// int money ;
// int durationy ;
// int emiy ;

// }
class FD:public person  {
	public:
	int interestr;
	int amount ;
	int time ;
	int finalam;
	void setinterestr (int i){
	this->interestr = i ;
}
void setamount (int a){
	this->amount = a;
}
void settime (int t){
	this->time = t ;
}
void setfinalam (int am){
	this->finalam =am ;
}
void display(){
	cout <<"Name:"<<name <<endl;
	cout << "Salary:"<<salary<<endl;
	cout <<"Interest Rate:"<<interestr<<endl;
	cout <<"Amount To be deposited:"<<amount<<endl;
	cout <<"Time for which amount is deposited(in years):"<<time<<endl;
	cout <<"Final amount "<<finalam<<endl ;
}

};

int main() {
	string b ;
	// user will input whether which type of borrower came i have given here two options home and gold 
	// user will input total no of borrowers
	cin >>  b;
	if (b=="home"){
		homeloan h ;
		// user will enter his personal details 
    string n ; cin >>n ;
	h.setname(n);
	int p ,  q , r , s ,t ;
	cin >> p>>q >>r >>s;
	h.setsalary(p);
	h.setinterestrate(q); //interest rate selected by user as we are in web 3.0(:  
	h.setmoney(r);
	h.setdurationy(s);
	int emi = (r*q*pow(1+r,s))/(pow(1+r,s)-1);
   h.setemiy(emi);
   h.displaybill();
	}              
if (b=="lender"){
	FD f;
	string nam ;
	cin >> nam ;
	f.setname(nam);
	int p ,  q , r , s ,t ;
	cin >> p>>q >>r >>s;
	f.setsalary(p);
	f.setinterestr(q); //interest rate selected by user as we are in web 3.0(:  
	f.setamount(r);
	f.settime(s);
	int finalamount = r*pow(1+r/100,s);
   f.setfinalam(finalamount);
   f.display();

}

	return 0 ;}