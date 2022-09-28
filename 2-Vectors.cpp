#include<bits/stdc++.h>
using namespace std;

void printVec(vector<int> &v)
{
    for(int i=0;i<v.size();i++)
    {
      cout<<v[i]<<" ";
      //v.size()->o(1)
    }
    cout<<endl;
}

// int main()
// {
//     vector<int> v;
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++)
//     {
//         int x;
//         cin>>x;
//         v.push_back(x); //o(1)
//     }
//     return 0;
// }


int main()
{
    vector<int> v(10,3);
    v.push_back(7);
    v.push_back(6);
    printVec(v);
    v.pop_back();
    printVec(v);
    
    //you can copy vectors unlike arrays
    vector<int> v2=v; //o(n)

    //vectors are also passed by value only in a function i.e a copy is made and passed to function
    //Hence again it is an o(n) operation

    // It is better to pass a reference by '&'

    
    return 0;
}

/*
void printVec(vector<int> &v)
{
     for(int i=0;i<v.size();i++)
    {
      cout<<v[i]<<" ";
      //v.size()->o(1)
    }
    cout<<endl;
}
*/