#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--){
    	string s;
    	cin>>s;
    	int m=s.length();
    	int count=0;
    	for(int i=0;i<m;i++){
    		if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]== 'A' || s[i]=='E' ||s[i]=='I' || s[i]=='O' || s[i]=='U') count++;
    	}
    	cout<<count<<"\n";
    }
    return 0;
}
