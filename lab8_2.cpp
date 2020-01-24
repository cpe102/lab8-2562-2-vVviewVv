#include<iostream>
using namespace std;

//Write the function printO() here
char printO(int y,int x){
	string V;
	int i,j;
	if (x>0 && y>0){
		for(int j=0; j!=y; ++j){
			for(int i=0; i!=x; ++i){
			cout << 'O';
			}
			cout << "\n";
		}
		

		
	}else{
		cout << "Invalid input";
	}
}

int main(){
	
	printO(2,2);
	cout << "\n";
	
	printO(3,5);
	cout << "\n";	
	
	printO(5,3);
	cout << "\n";	
	
	printO(0,3);
	cout << "\n";	
	
	printO(7,0);
	cout << "\n";	
	
	return 0;
}
