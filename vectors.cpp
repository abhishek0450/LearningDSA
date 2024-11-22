//Vectors - 

#include <iostream>
#include <vector>
using namespace std;

int main(){
	
	vector <int> vec = {1,2,3,4,5,6,7};
	vec.push_back(24);
//for traversing vector we use for each loop
	for(int val : vec){
	cout<< val<< endl;
}
//methods of vectors
cout << "size of vector = "<<vec.size();

//vec.push_back(24); -> add element at the end of vector
//vec.pop_back(); -->> remove last element of vector
//return first elemnet from vector
cout<<vec.front()<<endl;
//return last element from vector
cout<<vec.back()<<endl;
cout<<"vector element at 3rd index = "<<vec.at(3)<<endl;

	
	return 0;
}

