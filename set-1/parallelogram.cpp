#include <iostream>
using namespace std;


void parallelogram(int rows){
	for(int i = rows; i > -1; i--){
    		for(int j = i; j >-1; j--){
			cout << " ";
		}
		cout << "****";
		cout << endl;
	}
}

int main(){
    int rows;
    cin >> rows;
    parallelogram(rows);
}
