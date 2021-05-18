#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  if (n%7==0) 
      if (n>0) cout << "positive"<< endl;
      if (n<0) cout << "negative" << endl;
  return 0;
}