#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	bool prime[n+1];
    for(int i=2;i<=n;i++) prime[i]=true;
    prime[0]=false;
    prime[1]=false;
	int m = sqrt(n);
	for(int i=2;i<=m;i++){
          if(prime[i] == true){
          	for(int p=i*i ; p<=n ; p+=i){
          		prime[p]=false;
          	}
        }
 	}
 	int count=0;
 	for(int i=2;i<=n;i++) {
 		if(prime[i]) count++;
 	}
 	cout << count <<"\n";
	return 0;
}