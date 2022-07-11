#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    vector<int> arr;
    arr.push_back(1);
    arr.push_back(3);
    arr.push_back(4);
    arr.push_back(6);
    arr.push_back(8);
    arr.push_back(9);

    cout<<"binary_search  "<<binary_search(arr.begin(),arr.end(),6);
    cout<<"lower boun -> "<<lower_bound(arr.begin(),arr.end(),6)-arr.begin()<<endl;

    int a=3;
    int b=5;

    cout<<"max "<<max(a,b)<<endl;
    cout<<"min "<<min(a,b);

    swap(a,b);
    cout<<endl<<" a "<<a<<endl;

    string abcd="abcd";
    reverse(abcd.begin(),abcd.end());
    cout<<"string abcd "<<abcd<<endl;

    rotate(arr.begin(),arr.begin()+1,arr.end());
    cout<<"after rotate"<<endl;
    for(int i:arr){
    cout<< i <<" ";
    }
    }