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
   int y;
   for(int i=0;i<n;i++){
    cin>>v[i];

   }
   long long res=0;
   int i=0;
   while(1){
    if(*v.begin()%x==0){
        int val=x;
        long long tem=v[i]/x;
        while(val--){
            v.push_back(tem);
        }
        res+=v[i];
        v.erase(v.begin());

    }
    else
        break;
   }
   for(auto m:v){
    res+=m;
   }

   cout<<res<<"\n";
 }
}

