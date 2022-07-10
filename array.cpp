#include<stdio.h>
#include<iostream>
#include<array>
using namespace std;
int main(){
array <int,4> a = {10,2,3,4};
int size=a.size();
cout<<"size "<<size<<endl;
for(int i=0;i<a.size();i++)
{
    cout<<a[i]<<endl;
}
cout<<"empty check  "<<a.empty()<<endl;
cout<<"element at 2nd endex  "<<a.at(2)<<endl;
cout<<"first element "<<a.front()<<endl;
cout<<"end element  "<<a.back()<<endl;

for(auto i : a)
{
    cout<<i<<" ";
}
}


