#include<bits/stdc++.h>
using namespace std;

void printVecpair(vector<pair<int,int>> &v)
{
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i].first<<" "<<v[i].second;
        cout<<endl;
    }
    cout<<endl;
}

void printVec(vector<int> &v)
{
    cout<<"size : "<<v.size()<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}


// vector of pairs
int main()
{
    
    vector<pair<int,int>> v={{1,2},{2,3}};
    printVecpair(v);
    return 0;
}

//array of vectors
int main2()
{
    int N;
    cin>>N;
    vector<int> v[N];

    for(int i=0;i<N;i++)
    {
        int n;
        cin>>n;
        for(int j=0;j<n;j++)
        {
            int x;
            cin>>x;
            v[i].push_back(x);
        }
    }
    for(int i=0;i<N;i++)
    {
        printVec(v[i]);
    }

    return 0;
}

//vectors of vectors
int main3()
{
    int N;
    cin>>N;
    vector<vector<int>> v;
    for(int i=0;i<N;i++)
    {
        int n;
        cin>>n;
        vector<int> temp;
        //v.push_back(vector<int> ())
        for(int j=0;j<n;j++)
        {
            int x;
            cin>>x;
            temp.push_back(x);
        }
        v.push_back(temp);
    }
    v[0].push_back(10);
    v.push_back(vector<int> ());
    for(int i=0;i<v.size();i++)
    {
        printVec(v[i]);
    }
    cout<<v[0][1];
    return 0;
}