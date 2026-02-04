#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define enl '\n'
const ll INFLL = (ll)4e18;

void Solaiman(){
   int n; cin >> n;
   vector<int> a(n);
   for(auto &u : a) cin >> u;

   int len = 0, ans = 0;
   for(int i = 0; i < n; i++){
      if(a[i]>0){
        len++;
        ans = max(len, ans);
      }
      else{
         len = 0;
      }
   }

   cout << ans << enl;
}

int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   
   int t = 1; cin >> t;
   for(int i = 1; i <= t; i++){
      Solaiman();
   }
   return 0;
}