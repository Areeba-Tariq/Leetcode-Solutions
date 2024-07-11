//     *    
//    ***   
//   *****  
//  ******* 
// *********
// *********
//  ******* 
//   *****  
//    ***   
//     *  

#include <iostream>
using namespace std;
void patternPrinting(int N) {
  //for upper half
  for(int i=0;i<N;i++)
    {
      for(int j=0;j<N-i-1;j++)
        {
          cout<<" ";
        }
      for(int j=0;j<2*i+1;j++)
        {
          cout<<"*";
        }
      for(int j=0;j<N-i-1;j++)
        {
          cout<<" ";
        }
      cout<<"\n";
    }
  
  for (int i = N-1; i>=0; i--) {
    for (int j =0; j <N-i-1; j++) {
      cout<<" ";
    }
    for(int j=1;j<=2*i+1;j++)
      {
        cout<<"*";
      }
    for (int j =0; j <N-i-1; j++) {
      cout<<" ";
    }
    
    cout << "\n";
  }
}
int main() {
  int N = 5;
  patternPrinting(N);
}