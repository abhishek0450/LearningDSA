#include <iostream>
using namespace std;

void square(int n){
    for(int i=0; i<n  ; i++){
        for(int j=0; j<n ; j++){
            cout<<"* ";
        }
        cout<<"\n";
    }
}

void RightTriangle(int n){
    for(int i=0; i<n  ; i++){
        for(int j=0; j<=i ;j++){
            cout<< "* ";
        }
        cout<<"\n";
    }
}

void RightNumberRowTriangle(int n){
    for(int i=0; i<n  ; i++){
        for(int j=0; j<i ;j++){
            cout<< i;
        }
        cout<<"\n";
    }
}

void RightNumberOneTriangle(int n){
    for(int i=1; i<=n  ; i++){
        for(int j=1; j<=i ;j++){
            
                cout<<j;
            
        }
        cout<<"\n";
    }
}

void SquareContinueNumber(int n){
    int num = 1;
    for(int i=1; i<=n  ; i++){
        for(int j=1; j<=n ;j++){
            
                cout<<num<<" ";
                num++;
            
        }
        cout<<"\n";
    }
}

void RightNumberContinueTriangle(int n){
    int num = 1;
    for(int i=1; i<=n  ; i++){
        for(int j=1; j<=i ;j++){
            
                cout<<num;
                num++;
            
        }
        cout<<"\n";
    }
}

void SquareContinueCharacter(int n){
    char letter = 'A';
    for(int i=1; i<=n  ; i++){
        for(int j=1; j<=n ;j++){
            
                cout<<letter<<" ";
                letter++;
            
        }
        cout<<"\n";
    }
}

void UpsideDownRightTriangle(int n){
    
    for(int i=1; i<=n  ; i++){
        for(int j=i; j<=n ;j++){
            
                cout<<" *";
                
            
        }
        cout<<"\n";
    }
}

void ReverseNumberRightTriangle(int n){
    int num = 1;
    for(int i=1;i<=n;i++){
       for(int j=1;j<=i;j++){
           cout<<num<<" ";
           num++;
       }
        cout<<"\n";
    }
}

//void RightSideRightTriangleWithStar(int n){
//     for(int i=1; i<=n  ; i++){
//         for(int j=1; j<=n-1 ;j++){
//                 cout<<"* ";
            
//         }
        
//         cout<<"\n";
//     }
// }

int main() {
    
    //square(10);
    //RightTriangle(5);
    //RightNumberRowTriangle(10);
    //RightNumberOneTriangle(10);
    //RightNumberContinueTriangle(3);
    //SquareContinueNumber(3);
    //RightSideRightTriangleWithStar(3);
    //SquareContinueCharacter(3);
    //UpsideDownRightTriangle(5);
    ReverseNumberRightTriangle(5);
        
    return 0;
}