#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
#define mod 1000000007
int main(){
 int t;
 cin>>t;
 while(t--){
   int n;
   cin>>n;
   string ans;
   if(n==1)
    ans+="9";
   else if(n==2)
    ans+="98";
   else if(n>=3){
    ans+="989";
    n=n-3;
    int val=48;
    while(n--){
        if(val==57){
            ans+=char(val);
            val=47;
        }
        else
            ans+=char(val);
        val++;
    }
   }
 cout<<ans<<"\n";
 }
}
