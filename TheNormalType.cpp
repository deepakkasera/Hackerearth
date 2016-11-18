#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	std::vector<int> v(n);
	for(int i=0;i<n;i++) cin>>v[i];
	set<int> s;
    for(int i=0;i<n;i++)  s.insert(v[i]);
    int m=s.size();
    cout<<m;
 	return 0;
}