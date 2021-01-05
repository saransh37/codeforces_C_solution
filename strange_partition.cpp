#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
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
float a[n];
 for(int i=0;i<n;i++)
    cin>>a[i];
  int mi=0,ma=0;
     for(int i=0;i<n;i++){
         mi+=a[i];
         if(a[i]%x==0)
             ma+=a[i]/x;
         else
             ma+=a[i]/x+1;
     }
     if(mi%x==0)
         mi=mi/x;
     else
       mi+=mi/x+1;
  cout<<mi<<" "<<ma<<endl;
 }
}
