#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<int>repeating(vector<int>a)
{
		unordered_map<int,int>map;
			for(int i=0;i<a.size();i++)
				map[a[i]]++;
				for(auto c:map)
				cout<<c.first<<" "<<c.second<<endl;

			vector<int> b;
			for(int i=0;i<a.size();i++)
				{
				int key=a[i];
				auto temp=map.find(key);
				if(temp->second>=2)
				{
				b.push_back(temp->first);
				}
				}
				return b;
				}
int main(void)
{
	int n,data;
	cout<<"Enter the no. of elements ";
	cin>>n;
	vector<int> v;
	for(int i=0;i<n;i++)
	{
	cin>>data;
	v.push_back(data);
	}
	vector<int>s;
	s=repeating(v);
	for(auto x:s)
	cout<<x<<" "<<endl;
	cout<<s.size()<<" ";
	
	
}
