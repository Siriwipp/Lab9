#include<iostream>
using namespace std;

//Write the function printO() here
void printO(int rows,int cols){
	if(rows <= 0 || cols <= 0){
	cout << "Invalid input"<< endl;
}
	for(int N = 0; N < rows; N++){
		for(int M = 0; M < cols; M++){
			cout << 'O';
		}
		cout <<'\n';
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
	
	printO(7,-1);
	cout << "\n";	
	
	return 0;
}
