#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int n;
  string s;
  cin >> n >> s;
  int d = 0, lo = 0, u = 0, c = 0;
  for (int i = 0; i < n ; i++) { 
    if (s[i] >= '0' && s[i] <= '9') d  = 1;
    else if (s[i] >= 'a' && s[i] <= 'z') lo = 1;
    else if (s[i] >= 'A' && s[i] <= 'Z') u  = 1;
    else c = 1;  
  }
  int ans = 4 - (d + lo + u + c);
  cout << max(ans, 6 - n);
  return 0;
}
