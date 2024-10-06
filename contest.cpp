#include <bits/stdc++.h>
using namespace std;

class cycle{
    int val;
    cycle(int a){
        val=a;
    }
    void speed(){
        cout<<val;
    }
}
void fun(int n){
    cycle a(5);
    a.speed();
}

int main() {
    fun(4);
}
