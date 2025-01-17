
#include <iostream>
using namespace std;

void print(int n) { // Change return type to 'void'
    if (n == 5) return; // Base condition to stop recursion
    n++;
    cout << n << " "; // Print the current number
    print(n); // Recursive call with updated value of n
}

int main() {
    print(0); // Start the recursion from 0
    return 0;
}
