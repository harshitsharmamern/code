#include <bits/stdc++.h>
using namespace std;

class cycle{
    public:
    int val;
    cycle(int a){
        val=a;
    }
    void speed(){cout<<val;}
};
void fun(int n){
   int x=0;
   for(int i=0;i<5;i++){
    x++;
   }
   cycle c(5);
   cycle c1(6);
   cycle c2(6);
   c2.speed(); cout<<"\n";
   c1.speed();
}

int main() {
    fun(4);
}
