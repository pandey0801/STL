#include<iostream>
#include<queue>
using namespace std;

int main()
{
    priority_queue<int> max; //max heap
    max.push(1);
    max.push(2);
    max.push(0);
    max.push(5);
    max.push(4);

    int n = max.size();
    for(int i=0;i<n;i++)
    {
        cout<<max.top()<<" ";
        max.pop();
    }cout<<endl;


     priority_queue<int,vector<int> , greater<int> > min;  //min heap
    min.push(1);
    min.push(2);
    min.push(0);
    min.push(5);
    min.push(4);

    int m = min.size();
    for(int i=0;i<m;i++)
    {
        cout<<min.top()<<" ";
        min.pop();
    }cout<<endl;

    cout<<"empty "<<min.empty();
}