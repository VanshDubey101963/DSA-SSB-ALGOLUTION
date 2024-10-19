#include <iostream>
using namespace std;


int main(){
	int arr[7], n = 6;
	for(int i = 0; i < 7; i++){
		cin >> arr[i];
	}
	
	for(int i = 0; i < 3; i++){
		if(i >= n){
			break;
		}
		
		swap(arr[i], arr[i + n]);
		n--;
	}
	for(int i = 0; i < 7; i++){
		cout << arr[i];
	}

	return 0;
}