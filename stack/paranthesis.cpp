#include <bits/stdc++.h>
using namespace std;
bool matching(char a, char b){
    return (a=='('&&b==')'||a=='{'&&b=='}'||a=='['&&b==']');
}
bool paranthesisChecker(string str){
    stack<char>s;
    for(char x:str){
        if(x=='('||x=='{'||x=='[')
        s.push(x);
        else{
            if(s.empty()==true){
                return false;
            }
            if(matching(s.top(),x)==false){
                return false;
            }
            else{
                s.pop();
            }
        }
    }
    return (s.empty()==true);
}
int main(){
    
    return 0;
}