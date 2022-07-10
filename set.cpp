#include<iostream>
#include<set>
using namespace std;

int main()
{
set<int> s;
s.insert(5);
s.insert(5);
s.insert(1);
s.insert(6);
s.insert(0);
s.insert(1);
s.insert(6);
                //size,begin,end,empty    o(n)
for(int i:s)   //find,cout,insert, erase     o(logn)
{
cout<<i<<" ";
}

cout<<endl;
//s.erase(s.begin());        iterator mtlab uske alawa usko point larne wala
set<int>::iterator it = s.begin();
it++;
s.erase(it);
for(int i:s)
{
cout<<i<<" ";
}

cout<<endl;
cout<<"5 is present or not "<<s.count(5)<<endl;   //check element is persent or not
cout<<"-5 is present or not "<<s.count(-5)<<endl;

set<int>::iterator itr =s.find(5); //find will return iterator     .   all element after 5
for(auto it=itr;it!=s.end();it++)
{
    cout<<*it<< " ";
    }

}