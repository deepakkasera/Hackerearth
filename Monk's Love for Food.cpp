#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int q,a,b;
	stack<int> s;
	cin >> q;
	while(q--){
		cin >> a ;
		if(a == 2){
			cin >> b;
			s.push(b);
		}
		else if (a == 1) {
			if(s.empty()){
				cout << "No Food " << endl;
			}
			else if(!s.empty()){
				cout << s.top() << endl ;
				s.pop();
			}
		}
	}
	return 0;
}