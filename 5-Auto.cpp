#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v={1,2,3,4,5,6,7};

    for(int value:v)
    {
        cout<<value<<endl; // copy is sent
    }
    cout<<endl;

    //pass by reference
    for(int &value : v)
    {
        cout<<value;
    }
    cout<<endl;

    vector<pair<int,int>> v_p={{1,2},{2,3}};

    for(pair<int,int> &value:v_p)
    {
        cout<<value.first<<" "<<value.second;
    }
    cout<<endl;

    //AUTO 
    for(auto it=v.begin();it!=v.end();it++){
        cout<<*it<<endl;
    }
    cout<<endl;

     for(auto &value:v_p)
    {
        cout<<value.first<<" "<<value.second;
    }

    return 0;
}
