#include <iostream>
using namespace std;

int main(){
	int arr[5] = {1, -1, 2, -2, 0}, count = 0;
	for(int i = 0; i < 5; i++){
		if(arr[i] < 0){
			count++;
		}
	}
	cout << count;

	return 0;
}