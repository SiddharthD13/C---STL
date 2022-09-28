#include<bits/stdc++.h>
using namespace std;

void print(set<string> &s)
{
   for(auto &i: s)
   {
    cout<<i<<endl;
   }
//    for(auto it=s.begin();it!=s.end();it++)
//    {
//     cout<<(*it)<<endl;
//    }

}

int main()
{
    set<string> s;
    s.insert("abc");
    s.insert("zsdf");
    s.insert("bcd");
    auto it=s.find("abc");
    print(s);
    return 0;
}