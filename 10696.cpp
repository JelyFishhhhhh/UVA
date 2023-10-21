// 10696- f91

#include <iostream>
using namespace std;

#define ll long long
#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

ll func(ll n){

    if(n>= 101){
        return n- 10;
    }
    return func(func(n+ 11));
}

signed main(){

    fastio;

    ll n;
    while(cin>> n&& n!= 0){

        cout<< "f91("<< n<< ") = "<<func(n)<<'\n';
    }
}
