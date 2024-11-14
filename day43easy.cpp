#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,a,b;
	    cin>>n>>a>>b;
	      int result=(3*a)-(n-a);;
	    if(result>=b){
	        cout<<"PASS"<<endl;
	    }
	    else {
	        cout<<"FAIL"<<endl;
	    }
	}
	return 0;

}
