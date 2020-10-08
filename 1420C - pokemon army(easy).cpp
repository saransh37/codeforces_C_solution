#include<iostream>
#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll solve(int a[],int n){
ll t[n+1][2];
t[0][0]=0;
t[0][1]=0;
for(int i=1;i<=n;i++){
    t[i][1]=max(t[i-1][1],t[i-1][0]+a[i-1]);
    t[i][0]=max(t[i-1][0],t[i-1][1]-a[i-1]);
}
return max(t[n][0],t[n][1]);
}
int main(){
   int t;
   cin>>t;
   while(t--){
    int n,q;
    cin>>n>>q;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int l,r;
    while(q--){
        cin>>l>>r;
    }
    cout<<solve(a,n)<<"\n";
   }

 }
