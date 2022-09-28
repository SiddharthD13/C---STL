#include<bits/stdc++.h>
using namespace std;

int main()
{
    // vector<int> v={1,2,3,4};
    // vector<int>::iterator it=v.begin();
    // for(it;it!=v.end();it++)
    // {
    //     cout<<*it<<endl;
    // }

    vector<pair<int,int>> vp={{1,2},{3,4},{5,6}};

    vector<pair<int,int>>::iterator it=vp.begin();
    for(it;it!=vp.end();it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }
    return 0;
}
