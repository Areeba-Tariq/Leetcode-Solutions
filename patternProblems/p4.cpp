// 1
// 22
// 333
// 4444
// 55555

#include <iostream>
using namespace std;
void patternPrinting(int N){
  for(int i=1;i<=N;i++)
    {
      for(int j=1;j<=i;j++)
        {
          cout<<i;
        }
      cout<<"\n";
    }
}
int main() {
  int N=5;
  patternPrinting(N);
}