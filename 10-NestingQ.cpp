//https://www.hackerearth.com/problem/algorithm/the-monk-and-class-marks/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<int,multiset<string>> marks_map;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int marks;
        string name;
        cin>>name>>marks;
        marks_map[marks].insert(name);
    }
    auto cur_it=--marks_map.end();
    while(true)
    {
        auto &students=(*cur_it).second;
        int marks=(*cur_it).first;
        for(auto student: students)
        {
            cout<<student<<" "<<marks<<endl;
        }
        if(cur_it==marks_map.begin()) break; // to end the infinite loop
        cur_it--;
    }

    return 0;
}

/*
    Alternate way without using iterators to print in descending order , in this multiply marks by -1

    for(int i=0;i<n;i++)
    {
        int marks;
        string name;
        cin>>name>>marks;
        marks_map[-1*marks].insert(name);
    }
    
    for(auto &marks_student_pr: marks_map)
    {
        auto &students=marks_student_pr.second;
        int marks=marks_student_pr.first;
        for(auto student: students)
        {
            cout<<student<<" "<<-1*marks<<endl;
        }
    }
    

*/