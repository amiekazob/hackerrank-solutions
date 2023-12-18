#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  string s;
  cin >> s;
  int ans = 1;
  for (int i = 0; i < s.size() ; i++){
  	if (s[i] >= 65 && s[i] <= 90) ans++;
  }
  cout << ans <<"\n";
  return 0;
}
