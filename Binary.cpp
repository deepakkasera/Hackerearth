#include <bits/stdc++.h>
using namespace std;
int binarySearch(std::vector<int>& v,int item){
	int left=0,right=v.size()-1;
	while(left <= right){
		int middle = (left+right)/2;
		if(item == v[middle] )   return middle+1;
		if(item > v[middle]) left=middle+1;
		else if(item < v[middle]) right = middle-1;
	}
	return -1;
}
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	std::vector<int> v(n);
	for(int i=0;i<n;i++)  cin>>v[i];
	sort(v.begin(),v.end());
    int q;
    cin>>q;
    while(q--){
    	int a;
    	cin>>a;
    	int i= binarySearch(v,a);
    	cout<<i<<endl;
    }
	return 0;
}