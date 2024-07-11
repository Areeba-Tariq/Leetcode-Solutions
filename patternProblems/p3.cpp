// 1
// 12
// 123
// 1234
// 12345

#include <iostream>
using namespace std;
void patternPrinting(int N){
  for(int i=1;i<=N;i++)
    {
      for(int j=1;j<=i;j++)
        {
          cout<<j;
        }
      cout<<"\n";
    }
}
int main() {
  int N=5;
  patternPrinting(N);
}