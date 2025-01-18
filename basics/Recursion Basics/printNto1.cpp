#include<iostream>
using namespace std;
//void printNto1(int i, int n){
//	if(i>n) return;
//	cout<<n<<" ";	
//	printNto1(i,n-1);
//}
//
//int main(){
//	printNto1(1,7);
//	return 0;
//}


void printNto1(int n) {
    if (n < 1) return;  // Base condition
    cout << n << " ";   // Print current value
    printNto1(n - 1);   // Recursive call with n decremented
}

int main() {
    printNto1(7);  // Function call
    return 0;
}

//The parameter i is redundant because it doesn't play a functional role in controlling the recursion.
//The recursion is only dependent on n. The base condition if (i > n) could be replaced with if (n < 1) to achieve the same result.
//You could remove i entirely,
