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
long long sum=0,res1=0,res2=0;
  int i=0;
  while(i<n){
        long long s=a[i];
    if(s%x==0){
        while(s%x==0&&i<n-1){
            i++;
            s+=a[i];
        }
    }

    res1+=ceil(float(s)/float(x));
    i++;

  }
  int j=0;
  while(j<n){
        long long s=a[j];
    if(s%x!=0){
        while(s%x!=0&&j<n-1){
            j++;
            s+=a[j];
        }
    }
    j++;
    res2+=ceil(float(s)/float(x));
  }
  cout<<res2<<" "<<res1<<endl;
 }
}
