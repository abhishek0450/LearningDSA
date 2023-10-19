#include <iostream>
using namespace std;

void solidSquare(int n) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cout << "*";
    }
    cout << endl;
  }
}
void rightTriangle(int n) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j <= i; j++) {
      cout << "* ";
    }
    cout << endl;
  }
}
void numberRightTriangle(int n) {
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
      cout << j << " ";
    }
    cout << endl;
  }
}
void sameNumberRightTriangle(int n) {
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
      cout << i << " ";
    }
    cout << endl;
  }
}
void inverseRightTriangle(int n) {
  for (int i = 1; i <= n; i++) {
   for (int j = 1; j <= n-i+1;j++){
     cout<<"* ";
   }
    cout<<endl;
}
}
void numberRightInverseTriangle(int n) {
  for (int i = 1; i <= n; i++) {
   for (int j = 1; j <= n-i+1;j++){
     cout<<j<<" ";
   }
    cout<<endl;
}
}
void pyramid(int n) {
  for (int i = 0; i < n; i++) {
    //space before stars
    for(int j=0;j<n-i-1;j++){
      cout<<" ";
    }
    //stars
    for(int j=0;j<2*i+1;j++){
      cout<<"*";
    }
    //space after stars
    for(int j=0;j<n-i-1;j++){
      cout<<" ";
    }
    cout<<endl;
  }
  
}
void hollowRightTriangle(int n) {
  for (int i=0;i<n;i++){
    for(int j=0;j<n;j++){
       if(i==0 || j == 0 || j== n-i-1){
         cout<<"*";
       }
        else{
          cout<<" ";
        }
    }
    cout<<endl;
  }
}
void hollowPyramid(int n) {
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      
    }
  }
}

int main() {
  int n;
  cin >> n;
  pyramid(n);
}