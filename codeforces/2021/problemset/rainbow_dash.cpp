#include <bits/stdc++.h>
using namespace std;

int main(){
    int t, n; cin>>t;
    while(t--){
        cin>>n;
        if (n<3) cout<<n<<endl;
        else cout<<n/2+1<<endl;
    }
    return 0;
}

