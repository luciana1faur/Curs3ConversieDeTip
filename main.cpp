#include <iostream>
using namespace std;

int main() {
  char s[] = "1234";
  int n; 
  int i;
  n = 0;
  i = 0;

  while (s[i] >= '0' && s[i] <= '9'){
    n = 10*n+s[i]-'0';
    i++;
    cout << "n = " << n << endl;
  }
  return 0;
}