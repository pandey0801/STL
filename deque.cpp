#include<iostream>
#include<deque>
using namespace std;

int main()
{
deque<int> d;
d.push_back(1);
d.push_front(2);

for(int i:d)
{
    cout<<i <<" ";
}

/*d.pop_back();
for(int i:d)
{
    cout<<i <<" ";
}
*/ 

cout<<"print the element at index 1 :- "<<d.at(1)<<endl;
cout<<"back "<<d.back()<<endl;
cout<<"empty  "<<d.empty()<<endl;

cout<<"before erase "<<d.size()<<endl;
d.erase(d.begin(),d.begin()+1);
cout<<"after erase "<<d.size()<<endl;

//cout<<"capacity "<<d.capacity()<<endl;

}  