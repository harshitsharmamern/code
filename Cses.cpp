#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define vi vector<int>
#define fori(n) for(int i=0;i<n;i++)
#define forj(n) for(int j=0;j<n;j++)

#define fori0(n) for(int i=n-1;i>=0;i--)

#define pb push_back
#define print cout<<

#define in(n,a) fori(n){int x; cin>>x;a.pb(x);}

 
 int main() {

     int n; cin>>n;
     if(n==1){cout<<1;return 0;}
     if(n<=3){
        cout<<"NO SOLUTION";
        return 0;
     }

    //  cout<<2;
      fori(n+1){
        if(i && i%2==0 ){
            cout<<i<<" ";
        }
     }
     cout<<1;
     fori(n+1){
        if(i>1 && i&1 ){
            cout<<" "<<i;
        }
     }

return 0;

 }

// int main()
// {
//     int testCase=1;
//     cin>>testCase;
//     while(testCase--){
//         solve();
//     }
//     return 0;
// }