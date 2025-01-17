#include<iostream>
using namespace std;

void nameprintNtimes(int i, int n){
	
	if(i>n) return; //base condition
	cout<<"Name"<< " ";
	nameprintNtimes(i+1,n);
	
}

int main(){
	nameprintNtimes(1,5);
	return 0;
}

//TC = O(n) - staement in fn takes O(1) , and since calling n times O(n)
//SC = O(n) - we take stack space, function keeps calling itself and filling call stack untill it meets base condition
