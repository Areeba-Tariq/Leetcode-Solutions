// 12345
// 1234
// 123
// 12
// 1


#include <iostream>
using namespace std;
void patternPrinting(int N) {
  for (int i = N; i>0; i--) {
    for (int j = 1; j <=i; j++) {
      cout << j;
    }
    cout << "\n";
  }
}
int main() {
  int N = 5;
  patternPrinting(N);
}