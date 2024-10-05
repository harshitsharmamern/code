#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int solve(){
    
    int n;
    cin>>n;
    // vector<int> v;
    string s;
    cin>>s;
int max_ans=0;
    for(int i=0;i<s.size()-1;i++){
         set<int> sl;
         set<int> sr;
        // int j=substr(0,i);
        for(int k=0;k<=i;k++){
            sl.insert(s[k]);
        }
        for(int k=i+1;k<=s.size()-1;k++){
            sr.insert(s[k]);
        }
// max_ans=max(max_ans,(sl.size())+(sr.size()));
max_ans = max(max_ans, static_cast<int>(sl.size()+sr.size()));

    }
    cout<<max_ans<<endl;
     
return 0;
}

int main(){
    
int t;
cin>>t;

while(t){

 solve();
 t--;  
}
}