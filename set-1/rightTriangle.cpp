#include <iostream>
using namespace std;


void rightTriangle(int rows){
	for(int i = 0; i < rows; i++){
		for(int j = 0; j < i + 1; j++){
			cout << "*";
		}
		cout << endl;
	}
}

int main(){
	int rows;
	cin >> rows;
	
	rightTriangle(rows);
}