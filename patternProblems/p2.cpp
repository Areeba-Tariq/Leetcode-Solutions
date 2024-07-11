// *
// **
// ***
// ****
// *****

#include <iostream>
using namespace std;
void patternPrinting(int N){
  for(int i=1;i<=N;i++)
    {
      for(int j=0;j<i;j++)
        {
          cout<<"*";
        }
      cout<<"\n";
    }
}
int main() {
  int N=5;
  patternPrinting(N);
}