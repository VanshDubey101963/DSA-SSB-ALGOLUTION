#include <iostream>
using namespace std;


int main(){
	int arr[5] = {1, 2, 1, 2, 1}, n = 4, flag = 0;
	for(int i = 0; i < 2; i++){
		if(arr[i] != arr[n]){
			flag = 0;
			break;
		}
		n--;
		flag = 1;
	}
	if(flag == 1){
		cout << "Palindrome";
	}
	else{
		cout << "Not a Palindrome";
	}
	
	return 0;
}