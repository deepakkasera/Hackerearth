#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    std::vector<string> v(n);
    string str;
    for(int i=0;i<n;i++){
        cin >> str;
        v.push_back(str);
    }
    int q;
    cin >> q;
    string s;
    while(q--){
        cin >> s;
        int c =0;
        c = count(v.begin(),v.end(),s);
        cout << c << endl;
    }
    return 0;
}