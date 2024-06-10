#include <bits/stdc++.h>
using namespace std;
void permute(string s,int i=0){
    if(i==s.size()-1){
        cout<<s<<endl;
        return ;
    }
    for(int j=1;j<s.length();j++){
        swap(s[i],s[j]);
        permute(s,i+1);
        swap(s[i],s[j]);
    }
}
int main(){
    string s;
    int i=0;
    cout<<"ENter the string :";
    cin>>s;
    permute(s);
    return 0;
}