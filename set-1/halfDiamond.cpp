#include <iostream>
using namespace std;


void halfDiamond(int columns){
	for(int i = 0; i < columns; i++){
		for(int j = 0; j < i + 1; j++){
			cout << "*";
		}
		cout << endl;
	}
	for(int i = columns; i > -1; i--){
		for(int j = i - 1; j > 0; j--){
			cout << "*";
		}
		cout << endl;
	}
}

int main(){
	int columns;
	cin >> columns;
	
	halfDiamond(columns);
}