#include<iostream>
#include<vector>
#include<list>
#include<stack>
#include<map>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main(){
   /* map<int,int>mpp;//it works like dic in py,map gives in key sorted,key value pair
    vector<int>A{1,2,4,4,9,6,7,7,9};
    for(int i=0;i<A.size();i++){
        mpp[A[i]]++;
    }
    for(auto it:mpp){
        cout<<it.first<<" "<<it.second<<"\n";
    }
    multimap<char,string>mpp;
    for(int i=0;i<4;i++){
        char c;
        string s;
        cin>>c>>s;
        mpp.insert(make_pair(c,s));
    }
    for(auto it:mpp){
        cout<<it.first<<"-->"<<it.second<<"\n";
    }
    auto ind=mpp.find(key);
    if(ind!=mpp.end()){
        mpp.erase(ind);
    }*/
    //stack,queue,priority,deque
    stack<int>st;//last in first out
    st.push(10);
    st.push(20);
    cout<<st.top();
    st.top();
    st.empty();//if empty gives TRUE
    st.size();
    //valid paranthesis
    string s;
    cin>>s;
    stack<char>st;
    queue<int>Q;
    //{} [] ()
    for(int i=0;i<s.size();i++){
        if(s[i]=='(' or s[i]=='[' or s[i]=='{'){
            st.push(s[i]);
            
        }
        else{
            if(!st.empty() and st.top()=='{' and s[i]=='}'){
                st.pop();
            }
            else if(!st.empty() and st.top()=='(' and s[i]==')'){
                st.pop();
            }
            else if(!st.empty() and st.top()=='[' and s[i]==']'){
                st.pop()
            }
            else{
                flag=false;
                break;
            }
        }
    }
    if(flag==false or !st.empty())cout<<"No\n";
    else cout<<"Yes\n";
    //priority_queue
    priority_queue<int>pq;//by default this works as max heap
    pq.push(10);
    pq.push(20);
    pq.push(100);
    pq.push(5);
    while(!pq.empty()){
        cout<<pq.top()<<endl;//max value will be printed first
        pq.pop();
    }
    //deque
    
    
    
}