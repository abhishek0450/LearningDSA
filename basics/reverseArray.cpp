// reverse array 
#include<iostream>

using namespace std;

void reverseArray(int arr[],int n){
	int start = 0;
	int end = n-1;
	
	while(start<=end){
		swap(arr[start],arr[end]);
		start++;
		end--;
	}
	
	
}
void printArray(int arr[], int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}

int main(){
	int arr[]={4,6,3,8,1};
	printArray(arr,5);
	cout<<"\n";
	reverseArray(arr,5);
	printArray(arr,5);
	
	
	return 0;
}