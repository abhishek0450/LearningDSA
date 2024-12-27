//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//// brute force O(n^2)
////	int majorityElement(vector<int>vec){
////		for(int val: vec){
////			int freq=0;
////			for(int elem: vec){
////				if(elem == val){
////					freq++;
////				}
////			}
////				if(freq>vec.size()/2){
////				return val;
////				}
////		
////			}
////		return -1;
////	}
//
////brute force with optimization O(nlogn)
//	int majorityElement(vector<int>vec){
//		sort(vec.begin(),vec.end());
//		int freq =1, ans = vec[0];
//		for(int i=1;i<vec.size();i++){
//			if(vec[i]==vec[i-1]){
//				freq++;
//			}
//			else{
//				freq=1;
//				ans=vec[i];
//			}
//			if (freq>vec.size()/2){
//				return ans;
//			}
//		}
//		return ans;
//	}
//
//int main(){
//	vector<int> vec = {4,4,5,6,6,6,6,7,7,8,9,15};
//	int majorityelem = majorityElement(vec);
//	
//	cout<< "majority elelment = "<< majorityelem;
//	return 0;
//}

#include <iostream>
#include <vector>
using namespace std;

// Function to find the majority element
int findMajorityElement(vector<int> &vec) {
    int candidate = -1, count = 0;

    // Step 1: Find a candidate for the majority element
    for (int num : vec) {
        if (count == 0) {
            candidate = num;
            count = 1;
        } else if (num == candidate) {
            count++;
        } else {
            count--;
        }
    }

    // Step 2: Verify if the candidate is indeed the majority element
    count = 0;
    for (int num : vec) {
        if (num == candidate) {
            count++;
        }
    }

    if (count > vec.size() / 2) {
        return candidate;
    }

    return -1; // Return -1 if there is no majority element
}

int main() {
    vector<int> vec = {1, 2, 2, 3, 3, 4,4,4,4,4};
    int majorityElement = findMajorityElement(vec);

    if (majorityElement != -1) {
        cout << "Majority element: " << majorityElement << endl;
    } else {
        cout << "No majority element found." << endl;
    }

    return 0;
}
