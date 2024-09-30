#include<bits/stdc++.h>
using namespace std;


 
 
 int romanToInt(string s) {
    unordered_map<char,int>roman={{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};


    int total=0;
    int l=s.length();

    for(int i=0;i<l;i++){
        if(i<l-1 && roman[s[i]]<roman[s[i+1]]){
            total-=roman[s[i]];
        }
        else{
            total+=roman[s[i]];
        }
    }
    return total;
    }

    int main(){
        string s;
        cin>>s;
        cout<<romanToInt(s);
        return 0;
    }