#include <bits/stdc++.h>
using namespace std;
void subsets(string s,string curr=" ",int i=0){
    if(i==s.length()){
        cout<<curr<<endl;
        return ;
    }
    
    subsets(s,curr,i+1);
    subsets(s,curr+s[i],i+1);
}
int main(){
    string s;
    cout<<"Enter the string name :";
    cin>>s;
    string curr=" ";
    int i;
    subsets(s);
    return 0;
}