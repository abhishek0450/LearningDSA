//pair sum - given a sorted array , return a pair of 
//           array elemnt that has their sum = target.

#include<iostream>
#include<vector>
using namespace std;


// Brute force Approch 
// vector<int> pairSum(vector<int> nums, int target){
// 	vector <int> ans ;
// 	for(int i=0;i<nums.size();i++){
//		for(int j=0;j<nums.size();j++){
//				if(nums[i]+nums[j]==target){
//					ans.push_back(i);
//					ans.push_back(j);
//					return ans;	
//			}
//		}
//	}
//	return ans;
// }
 
 //using two pointer approch  ->> beacuse given sorted array
 vector<int> pairSum(vector<int> nums, int target){
 	vector <int> ans ;
 	int pairSum=0;
 	int i=0,j=nums.size()-1;
 	while(i<j){
 		pairSum=nums[i]+nums[j];
 		if(pairSum>target){
 			j--;
		 }
		 else if(pairSum<target){
		 	i++;
		 }
		 else{
		 	ans.push_back(i);
		 	ans.push_back(j);
		 	return ans;
		 }
	 }
	return ans;
 }
 

int main(){
	
	vector <int> vec = {2,4,5,8,10};
	vector<int> ans = pairSum(vec,10);
	
	cout<<"pair = "<<ans[0]<<","<<ans[1];
	
	
	return 0;
}