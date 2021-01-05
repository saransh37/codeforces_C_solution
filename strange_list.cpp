

#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
using namespace std;
#define mod 1000000007
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 int t;
 cin>>t;
 while(t--){
   int n,x;
   cin>>n>>x;
   vector<long long>v(n);
   vector<int>t(n,1);
   int y;
   for(int i=0;i<n;i++){
    cin>>v[i];
   }
   long long res=0;
   int i=0;
   while(v[i]%x==0){
    v.push_back(v[i]/x);
    t.push_back(t[i]*x);
    i++;
   }
   for(int i=0;i<v.size();i++)
    res+=v[i]*t[i];

   cout<<res<<"\n";
 }
}

