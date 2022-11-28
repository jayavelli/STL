#include<bits/stdc++.h>
#include<vector>
#include<iterator>
using namespace std;
bool comp(const pair<int,int>&a , const pair<int,int>&b)
{
    
        return a.second < b.second;
    }

int main()
{
	/*int n;
	cin>>n;
	
	vector<int>A;
	A.push_back(10);
	A.push_back(20);
	A.push_back(30);
	A.push_back(40);
	auto x=A.begin();//x is begin add of vector A and end is at +1 add of last add
	auto y=A.end()-1;//auto used to put an of the datatypes
	cout<<*x<<" "<<*y<<endl; 
	auto x1=A.rbegin();//it reverses the vector and points the start add
	auto x2=A.rend()+1;
	cout<<*x1<<" "<<*x2<<endl;
	sort(A.begin(),A.end());//ascending
	sort(A.rbegin(),A.rend());//descending
	int arr[100];
	sort(arr,arr+100);
	vector<vector<int>>grid(4,vector<int>(4,10));
	for(int i=0;i<4;i++)
	{
	    for(int j=0;j<4;j++)
	    {
	        cout<<grid[i][j]<<" ";
	        
	    }cout<<endl;
	}
	grid.push_back({10,20,30,40});*/
	pair<int,int>p(10,20);
	vector<pair<int,int>>vp;
	vp.push_back({10,20});
	vp.push_back({1,19});
	vp.push_back({12,13});
	vp.push_back({10,12});
	vp.push_back({10,11});
	sort(vp.begin(),vp.end(),comp);
	for(auto it : vp){
	    cout<<it.first<<" "<<it.second<<endl;
	}
   
	
}