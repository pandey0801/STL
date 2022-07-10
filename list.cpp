#include<iostream>
#include<list>
using namespace std;

int main()
{
    list<int> l ;
    list<int> n(5,100); // 5 element with 100

    l.push_back(1);
    l.push_front(2);

    for(int i:l)
    {
        cout<<i<<" ";
    }

    for(int i:n)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    l.erase(l.begin());
    cout<<"after erase "<<endl;
    for(int i :l)
    {
        cout<<i<<" ";
    }

}