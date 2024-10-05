#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
 int solve() {
        int m;
        cin>>m;
        int day=0;
        vector<vector<int>> mp(m);
        set<vector<vector<int>>> st;
        while(day<m){
            int p;
            cin>>p;
            for(int i=0;i<p;i++){
                int val;
                cin>>val;
                mp[val].push_back(day);
            }
            day++;
        }
        vector<int> ans;
        for(int day=0;day<m;day++){
            auto it = st[day];
            bool flag=false;
            for(auto ele: it){
                for(int check=day+1;check<m;check++){
                    // auto check_it = st[check];
                    //  for(auto check_ele: check_it){
                    //     ele!=
                    //  }
                    if(st[check].find(ele)==st[check].end()){
                      ans.push_back(ele);
                      flag=true;
                      break;
                    }
                }
               if(flag==true){
                 break;
               }
            }
        }
if(ans.size()<m-1){
    cout<<-1<<endl;
}
        for(int day=0;day<m;day++){
        cout<<ans[day]<<" ";
        }
        cout<<endl;
    }

    
 
int main()
{
    int testCase=1;
    cin>>testCase;
    while(testCase--){
        solve();
    }
    return 0;
}