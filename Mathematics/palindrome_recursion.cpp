#include <bits/stdc++.h>
using namespace std;
bool ispalindrome(string &str,int start,int end){
    if(start>=end){
        return true;
    }
    return (str[start]==str[end]) && ispalindrome(str,start+1,end-1);
}
int main(){
    string name;
    int n=name.size();
    int start=1;
    int end=n-1;
    cout<<"Enter the string";
    cin>>name;
    cout<<ispalindrome(name,start,end);
    return 0;
}