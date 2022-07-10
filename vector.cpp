#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;
    vector<int> a(5,1);    //vector with all element 1 
    vector<int> last(a);   // coping all element of vector a into vector last

    cout<<"capacity "<<v.capacity()<<endl;

    v.push_back(1);
    cout<<"capacity "<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"capacity "<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"capacity "<<v.capacity()<<endl;

    cout<<"size "<<v.size()<<endl;
    cout<<"first elemnt "<<v.front()<<endl;
    cout<<"last element "<<v.back()<<endl;

    cout<<"befor pop "<<endl;
    for(int i:v)
    {
        cout<< i<<" ";
    }
    v.pop_back();

    cout<<"after pop "<<endl;
    for(int i : v)
    {
        cout<< i <<" ";
    }

     for(int i : a)
    {
        cout<< i <<" ";
    }


      for(int i : last)
    {
        cout<< i <<" ";
    }

}

