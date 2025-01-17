//find smallest value in objects
#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

//int sortArr(vector<int>& arr) {
//    sort(arr.begin(),arr.end());
//    return arr[0];
//}


int smallestValue(int arr[], int size){
	int min = arr[0];
	for(int i=0;i<size-1;i++){
		if(min > arr[i]){
			min = arr[i];
		}
	}
	return min;
}

int main(){
	int arr1[] = {4,6,3,9,8};
	int minVal = smallestValue(arr1,5);
	cout<<"min value in array is: "<<minVal;
	

	
	return 0;
}

//smallestValue
//Time Complexity: O(N)
//Space Complexity: O(1)

//sortArr
//Time Complexity: O(N*log(N))
//Space Complexity: O(1)