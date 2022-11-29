#include<iostream>
#include<vector>
#include<list>;
#include<map>
using namespace std;
int main(){
    vector<int>A;
    A.push_back(10);
    A.emplace_back(20);//works like push_back
    A.push_back(30);
    A.push_back(50);
    //if we want to insert we want to know their add
    auto it=A.begin()+3;//1st elemnet add
    A.insert(it,40);
    for(auto x: A){
        cout<<x<<" ";
    }
    //deletion of data
    auto it1=A.begin();
    
    A.erase(it1);//we have to pass add
   // A.clear();//removes total containers
    auto y=find(A.begin(),A.end(),20);//it finds 20 and assingns its add to y
    //to know index of y
    int ind=y-A.begin();
    if(y!=A.end()){
        cout<<"Yes"<<"\n";
    }
    else{
        cout<<"No"<<"\n";
    }
}