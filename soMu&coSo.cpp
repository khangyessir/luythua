#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    int luyThua(int num){
        int coSo = num / 10;
        int soMu = num % 10;
        int ans = 1;
        for(int i=0; i<soMu; i++){
            ans *= coSo;
        }
        return ans;
    }
};

int main(){
    Solution sol;
    int n; cin >> n;
    int a[n];
    int sum = 0;
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    for(int i=0; i<n; i++){
        sum += sol.luyThua(a[i]);
    }
    cout << sum << endl;
    return 0;
}
