#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	
	int year=1,i=0;
	double loan,rate,pay,newb,RP,TT;
	
	cout << "Enter initial loan: ";
	cin >> loan;
	cout << "Enter inierest rate  per year (%): ";
	cin >> rate;
	cout << "enter amount you can payper year: ";
	cin >> pay;

	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	while(newb != 0){

		RP = loan*(rate/100);
		TT = loan+RP;
		newb = TT-pay;
		if(loan < pay) newb=0,pay=TT;
		
		
		cout << fixed << setprecision(2); 
		cout << setw(13) << left << year; 
		cout << setw(13) << left << loan*1.00;
		cout << setw(13) << left << RP*1.00;
		cout << setw(13) << left << TT*1.00;
		cout << setw(13) << left << pay*1.00;
		cout << setw(13) << left << newb*1.00;
		cout << "\n";
		if(loan < pay) pay = 0;
		loan = newb;
		if(newb < pay){
			year++;
			RP = loan*(rate/100);
			TT = loan+RP;
			pay = TT;
			newb = 0;
			cout << fixed << setprecision(2); 
			cout << setw(13) << left << year; 
			cout << setw(13) << left << loan*1.00;
			cout << setw(13) << left << RP*1.00;
			cout << setw(13) << left << TT*1.00;
			cout << setw(13) << left << pay*1.00;
			cout << setw(13) << left << newb*1.00;
			cout << "\n";
	
		}	
		year++;
	}
		
		
	return 0;
}
