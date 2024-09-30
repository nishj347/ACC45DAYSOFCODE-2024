#include <bits/stdc++.h>
using namespace std;

void cut(int l,int n){
    if(l%2==0 && n%2!=0){
        cout<<"YES"<<endl;
    }
    else if(l%2!=0 && n%2==0 ){
        cout<<"NO"<<endl;
    }
    else if(l%2!=0 && n%2!=0){
        cout<<"YES"<<endl;
    }
     else if(l % 2 == 0 && n % 2 == 0) {
        cout << "YES" << endl;  
    }
    
    
}

int main() {
	int t;
	cin>>t;
	while(t--){
	    int l;
	    int n;
	    cin>>l;
	    cin>>n;
	    cut(l, n);
	    
	}
return 0;
}




