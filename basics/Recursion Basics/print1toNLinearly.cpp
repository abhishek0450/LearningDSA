#include<iostream>
using namespace std;

void print1toNLinearly(int i, int n){
	if(i>n) return ;
	cout<<i<<" ";
	i++;
	print1toNLinearly(i,n);
	
}

int main (){
	print1toNLinearly(1,5);
	
	return 0;
}