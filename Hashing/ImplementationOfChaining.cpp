// #include <bits/stdc++.h>
// using namespace std;
// struct myHash
// {
//     int bucket;
//     list<int>*table;
//     myHash(int b){
//         bucket=b;
//         table=new list<int>[bucket];
//     }
//     void insert(int k){
//         int i=k%bucket;
//         table[i].push_back(k);
//     }
//     bool search(int k){
//         int i=k%bucket;
//         for(auto x:table[i]){
//             if(x==k){
//                 return true;
//             }
//             return false;
//         }
//     }
//     void delete(int k){
//         int i=k%bucket;
//         table[i].remove(k);
//     }
// };

// int main(){
//     myHash mh(7);
//     mh.insert(10);
//     mh.insert(20);
//     mh.insert(15);
//     mh.insert(7);
//     cout<<mh.search(10)<<endl;
//     mh.delete(15);
//     cout<<mh.search(15)<<endl;
//     return 0;
// }
#include <iostream>
#include <string>
using namespace std;

void swapStrings(string& str1, string& str2) {
    int length1 = str1.length();
    int length2 = str2.length();

    for (int i = 0; i < length1 && i < length2; ++i) {
        str1[i] ^= str2[i];
        str2[i] ^= str1[i];
        str1[i] ^= str2[i];
    }

    if (length1 != length2) {
        for (int i = length1; i < length2; ++i) {
            str1 += str2[i];
        }
        for (int i = length2; i < length1; ++i) {
            str2 += str1[i];
        }
        str1 = str1.substr(0, length2);
        str2 = str2.substr(0, length1);
    }
}

int main() {
    string str1 = "Hello";
    string str2 = "World";

    cout << "Before swapping:" << endl;
    cout << "String 1: " << str1 << endl;
    cout << "String 2: " << str2 << endl;

    swapStrings(str1, str2);

    cout << "\nAfter swapping:" << endl;
    cout << "String 1: " << str1 << endl;
    cout << "String 2: " << str2 << endl;

    return 0;
}
