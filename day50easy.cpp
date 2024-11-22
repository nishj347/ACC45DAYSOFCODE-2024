// For encoding an even-length binary string into a sequence of A, T, C, and G, we iterate from left to right and replace the characters as follows: 00 is replaced with A
// 01 is replaced with T
// 10 is replaced with C
// 11 is replaced with G
// Given a binary string 
// S
// S of length 
// N
// N is even), find the encoded sequence.
#include<bits/stdc++.h>
using namespace std;

string binary(string & n){
    string encoded=" ";
    for(size_t i;i<n.length();i+=2){
        string pair=n.substr(i,2);
        if(pair=="00")encoded+="A";
        else if(pair=="01")encoded+="T";
        else if(pair=="10")encoded+="C";
        else if(pair=="11")encoded+="G";

    }
    return "";
    }
    int main(){
        int t;
        cin>>t;
        while(t--){
            string n;
            cin>>n;
            cout<<binary(n);

        }
        return 0;
    }