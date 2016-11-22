#include <bits/stdc++.h>
#define SIZE 26
using namespace std;
 bool compare(pair<int,int> p1 , pair<int,int> p2){
      if(p1.second == p2.second ) 
         return p1.first < p2.first ; 
      return p1.second < p2.second ; 
 }
int main(int argc, char const *argv[])
{
   	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int n=s.length();
	    std::vector< pair<int,int> > v(SIZE);
	    int j;
	    for(int i=0 ; i<n ; i++){
	    	j=s[i]-'a';
	    	v[j].first = s[i] - 'a';
	    	v[j].second++;
	    }
	    sort(v.begin() , v.end() , compare);
	    char c;
	    for(int i=0;i<SIZE;i++){
	    	while(v[i].second--){
	    		cout<<(char)(v[i].first + 'a');
	    	}
	    }
	    cout<<"\n";
	}
	return 0;
}