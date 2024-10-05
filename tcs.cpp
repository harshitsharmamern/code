#include <bits/stdc++.h>

using namespace std;

void solve(int a[], int b[], int n,int sz) {
    
    for (int i = 0; i < n; i++) {
        int min_index = i;
        for (int j = i + 1; j < sz; j++) {
            if (a[j] < a[min_index]) {
                min_index = j;
            }
        }

        swap(a[i], a[min_index]);
        swap(b[i], b[min_index]);
    }
}

int main() {
    int n;
    int a[1000],b[1000];
    int num;
    int i=0;
    while (cin >> num) {
        a[i++]=num;

        if(cin.get()=='\n')break;

    }
    i=0;
    while (cin >> num) {
        b[i++]=num;
                if(cin.get()=='\n')break;
    }

    cin >> n;
    solve(a,b,n,i);

    for (int j = 0; j < i ;j++) {
        cout << b[j] << " ";
    }

    return 0;
}
