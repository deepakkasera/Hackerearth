#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	std::vector<long int> v(n);
	for(int i=0;i<n;i++) cin>>v[i];
	set<int> s;
    for(int i=0;i<n;i++)  s.insert(v[i]);
    int m=s.size();
    set<long int> s1;
    map<long int,long int> m1;
    int j=0;
    long long ans=0;
    for(int i=0;i<n;i++){
      j=max(i,j);
      while(j<n && s1.size() < m ){
      	m1[v[j]]++;
      	s1.insert(v[j]);
      	j++;
      }
      if(s1.size() == m)  ans+=n-j+1;
      m1[v[i]]--;
      if(m1[v[i]] == 0)  s1.erase(v[i]);
    }
    cout << ans << endl;
 	return 0;
}