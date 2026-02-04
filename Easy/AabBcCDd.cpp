#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define enl '\n'
const ll INFLL = (ll)4e18;

void Solaiman(){
   int n; cin >> n;
   string s; cin >> s;

   map<char, int> mp;
   for(auto &c : s){
      char ch = tolower(c);
      mp[ch]++;
   }

   vector<pair<char, int>> vp;
   for(auto &u : mp){
      vp.push_back(u);
   }

   sort(vp.begin(), vp.end(), [](auto a, auto b){
      return a.second > b.second;
   });

   if(vp.size() == 1){
      cout << vp[0].second << enl;
      return;
   }
   else{
      cout << vp[0].second + vp[1].second << enl;
   }
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