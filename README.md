# Test-Deep-Dive-into-Web-3.0
Hello Naman here 
# Code explaination 
I  have first created a class of a person which consist of two information i.e. his name and salary 
Then depending on person whether he want to take loan or to deposit money i have created their inherit class 
Loan one consist of four properties mainly interest rate money required duration and emi per year 
Based on this I have created a document type which contains all information about the loan 
For the person who deposit the money it's class consists of amount to be deposited time duration interest rate and final amount he gets after the fixed time 
And then finally  made a function to display all the information 
Then in main we take input from the user and displays his information at last with calculationg emi / final amount 
Thank you 
# how to run it 
For running the code we have to input first whehether he wants loan or he wants to lend 
and then enter his detalis like Name and salary 
if he has applied for loan we would input interestrate, amount required ,time duration respectively
if he has applied for fd we would input interestrate,amountdeposited,time respectively
I think my code is centralised system 
# Code 
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
	cout <<"Thank You"<<endl;
}

};

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
	cout <<"Thank You"<<endl;
}

};

int main() {
	string b ;
	
	
	cin >>  b;
	if (b=="loan"){
		homeloan h ;
		// user will enter his personal details 
    string n ; cin >>n ;
  h.setname(n);
	int p ,  q , r , s ,t ;
	cin >> p>>q >>r >>s;
	h.setsalary(p);
	h.setinterestrate(q);   
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
	f.setinterestr(q);   
	f.setamount(r);
	f.settime(s);
  int finalamount = r*pow(1+r/100,s);
   f.setfinalam(finalamount);
   f.display();

}

	return 0 ;}
  
  # Demerits of centralised system
  1. Power is only to the comapny / a individual or a group to the individuals not to the customers / employees
  2 . Decision mking can be worst be =y it as a group of individuals only control it so it take more time to make good decision and even sometime after taking so much time decision is not good
  3. As customers are generally exploited in such situation they don't have much view about the company it negatively affects the company also for employees of the company they also lack in honesty which also affect company 
  
  Thank you 
