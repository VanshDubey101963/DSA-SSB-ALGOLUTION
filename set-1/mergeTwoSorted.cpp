#include<iostream>
using namespace std;

int main(){
	int arr1[5] = {1, 2, 3, 4, 5}, arr2[5] = {-5, 6, -3, -2, -1}, arr3[10], count = 0, i = 0, j = 0;
    
	for(int k = 0; k < 10; k++){
		if(arr1[i] <= arr2[j]){
			arr3[k] = arr1[i];
			i++;
		}
		else if(arr2[j] < arr1[i]){
			arr3[k] = arr2[j];
			j++;
		}
		
		cout << arr3[k] << "\t";
	}

	return 0;
}