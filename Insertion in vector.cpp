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
}