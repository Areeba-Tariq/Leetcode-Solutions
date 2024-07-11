// ***********
//  ********* 
//   *******  
//    *****   
//     ***    
//      *  

#include <iostream>
using namespace std;
void patternPrinting(int N) {
  for (int i = N; i>=0; i--) {
    for (int j =0; j <N-i; j++) {
      cout<<" ";
    }
    for(int j=1;j<=2*i+1;j++)
      {
        cout<<"*";
      }
    for (int j =0; j <N-i; j++) {
      cout<<" ";
    }
    
    cout << "\n";
  }
}
int main() {
  int N = 5;
  patternPrinting(N);
}