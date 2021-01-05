
#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
#define mod 1000000007
int main(){
 int t;
 cin>>t;
 while(t--){
   int n,m;
   cin>>n>>m;
   long long a[n];
   for(int i=0;i<n;i++)
    cin>>a[i];

    long long b[m];
   for(int i=0;i<m;i++)
    cin>>b[i];

   sort(a,a+n,greater<long long>());
   long long res=0;
   int j=0;

   for(int i=0;i<n;i++){
    int val=a[i];
    if(j>m-1){
        res+=b[val-1];
    }
    else if(b[val-1]<=b[j])
        res+=b[val-1];
    else{
        res+=b[j];
        j++;
    }
   //cout<<res<<"\n";
   }
   cout<<res<<"\n";
 }
}
