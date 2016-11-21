#include <bits/stdc++.h>
using namespace std;
string reverseSentence(string s){
     string reversedSentence;
     int x=1;
     std::vector<string> v(x);
     std::vector<string>::iterator it;
     for(int i=0 ; i<s.length() ; i++){
        if(s[i] != ' ')  v[x-1] += s[i];
        else 
        {
            x++;
            v.resize(x);
        } 
     }
     reverse(v.begin(),v.end());
     for(it = v.begin() ; it != v.end() ; it++){
        reversedSentence.append(*it + " ");
     }
     return reversedSentence;
}
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin,s);
        cout << reverseSentence(s) <<"\n" ;
    }
    return 0;
}