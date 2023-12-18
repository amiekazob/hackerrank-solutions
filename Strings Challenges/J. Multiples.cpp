/* code starts here */
#include<bits/stdc++.h>
using namespace std;

int main() {
  int a, b, c;
  cin >> a >> b >> c;
  int max = 0, min = 0;

  //for maximum value
  if (a >= b && a >= c) {
  	max = a;
  }else if ( b >= a && b >= c) {
    max = b;
  }else{
  	max = c;
  }
//for minimum value
  if (a <= b && a <= c){
    min = a;
  }else if (b <= a && b <= c ) {
  	min = b;
  }else {
  	min = c;
  }
  cout << min << " " << max << "\n";
  return 0;
}
/* code end here */

