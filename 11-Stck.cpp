//stack -> LIFO Data Structure
// you can only access top and size of the element 
// you can do push , pop and see the top element 

//Queue-> First in First Out
// push pop front


#include<bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> s; 
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);

    while(!s.empty())
    {
        cout<<s.top()<<endl;
        s.pop();
    }   
    
    queue<string> q;
    q.push("abc"); 
    q.push("def"); 
    q.push("ghi"); 
    q.push("jkl"); 

    while(!q.empty())
    {
        cout<<q.front()<<endl;
        q.pop();
    }
    
    return 0;
}