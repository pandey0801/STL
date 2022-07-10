#include<iostream>
#include<queue>
using namespace std;

int main()
{
    queue<string> q;     //last in first out
    q.push("love ");
    q.push("babbar");
    q.push("kumar ");
    cout<<"top element "<<q.front()<<endl; //first in first out

    cout<<"size before pop "<<q.size()<<endl;
    q.pop();
    cout<<"top element "<<q.front()<<endl;
    cout<<"size after pop "<<q.size()<<endl;

}