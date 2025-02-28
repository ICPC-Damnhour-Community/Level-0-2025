#include <bits/stdc++.h>

using namespace std;

int main() {

    int n,m,a,b;
    cin>>n>>m;
    vector<pair<int,int>>vec(m);
    for(int i=0;i<m;i++)
        cin>>vec[i].second>>vec[i].first;
    sort(vec.begin(),vec.end());
    int currentBox=0,sum=0;
    for(int i=m-1;currentBox<n;i--) {
        if(i<0)
            break;
        if (n - currentBox > vec[i].second)
            sum += vec[i].first * vec[i].second;
        else
            sum += vec[i].first*(n - currentBox);
        currentBox += vec[i].second;
    }
    cout<<sum;

    return 0;
}