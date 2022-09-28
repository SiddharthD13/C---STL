// Next Greater Element 

// https://practice.geeksforgeeks.org/batch/MDP-1/track/mdcq-stack/problem/next-larger-element-1587115620

/*
Given an array arr[ ] of size N having elements, the task is to find the next greater element for each element of the array in order of their appearance in the array.
Next greater element of an element in the array is the nearest element on the right which is greater than the current element.
If there does not exist next greater of current element, then next greater element for current element is -1. For example, next greater of the last element is always -1.
*/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<long long> nextLargerElement(vector<long long> arr, int n)
{
    // Your code here
    vector<long long> nge(n);
    stack<long long> st;
    for(long long i=0;i<n;i++)
    {
        while(!st.empty() && arr[i]>arr[st.top()])
        {
            nge[st.top()]=arr[i]; // add the next greater element's index  
            st.pop(); // remove the topmost element from the stack
        }
        st.push(i);
    }
    while(!st.empty())
    {
        nge[st.top()]=-1;
        st.pop();
    }
    vector<long long> x(n);
    for(int i=0;i<n;i++)
    {
        if(nge[i]==-1) x[i]=-1;
        else x[i]=arr[nge[i]];
    }
    return nge;
}

int main()
{
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif
    // int t;
    // cin>>t;
    // while(t--)
    // {
     vector<long long> x={6,8,0,1,3};
     x=nextLargerElement(x,5);
     for(int i=0;i<5;i++)
     {
        cout<<x[i]<<endl;
     }
    // }
    return 0;   
}