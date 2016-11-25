#include <bits/stdc++.h>
using namespace std;
std::vector<int> createArray(string pattern){
    int m = pattern.length();
	std::vector<int> v(m);
	int j=0;
	for(int i=1 ; i<m ; ){
       if(pattern[i] == pattern[j]){
       	 v[i]=j+1;
         i++;
         j++; 
        }
        else {
        	if(j!=0) j=v[j-1];
        	else v[i]=0,i++;
        }
    }
    return v;
}
int kmp(string s,string p){
	int n=s.length();
	int m=p.length();
	std::vector<int> v(m);
	v = createArray(p);
    int i=0,j=0,count=0;
    while(i<n)
    {
    	if(s[i] == p[j]){
    		if(j == m-1) count++;
    		i++;
    		j++;
    	}
    	else if (j!=0) j=v[j-1];
    	else  i++;
     }
    return count;
 }
int main(int argc, char const *argv[])
{
	string p,s;
	cin>>p>>s;
	int ans = kmp(s,p);
	cout << ans <<"\n";	
	return 0;
}