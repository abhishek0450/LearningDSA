//maximum sub array - brute force approach

#include<iostream>
#include <vector>
 using namespace std;
 
 int main(){
 	vector <int> vec = {1,-4,2,5,-6,7,3,6};
// 	int max_sum = INT_MIN;
// 	for(int st=0;st<vec.size();st++){
// 		int currSum=0;
// 		for(int en=st; en<vec.size();en++){
// 			currSum += vec[en];
// 			max_sum = max(currSum,max_sum);
//		 }
//		 
//	 }


// using kadan's algorithm
	
 		int currSum=0,max_sum = INT_MIN;
 		for(int val:vec){
		 
 			currSum += val;
 			max_sum = max(currSum,max_sum);
 			if(currSum<0){
 				currSum=0;
			 }
		 }
		 	 
	 	cout<<"sum of maximum SubArray = "<<max_sum;
		 
		 return 0;
	 
 }