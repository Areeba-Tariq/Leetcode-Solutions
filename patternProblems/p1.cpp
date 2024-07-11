// *****
// *****
// *****
// *****
// *****

#include <iostream>
using namespace std;
void patternPrinting(int N){
  for(int i=0;i<N;i++)
    {
      for(int j=0;j<N;j++)
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
