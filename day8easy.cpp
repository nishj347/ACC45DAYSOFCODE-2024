#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    vector<int>arr(4);
	    for(int i=0;i<4;i++){
	        cin>>arr[i];
	    }
	    int a=arr[0]+arr[1]+arr[2];
	    int b=arr[1]+arr[2]+arr[3];
	    int c=arr[0]+arr[2]+arr[3];
	    int d=arr[0]+arr[1]+arr[3];
	    if(arr[0]>b ||arr[1]>c ||arr[2]>d || arr[3]>a){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	    
	}
	return 0;

}
