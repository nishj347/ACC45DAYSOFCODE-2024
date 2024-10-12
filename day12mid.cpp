#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;
	while(T--)
	{
	    int N;
	    cin >> N;
	    string str;
	    cin >> str;
	    int I=str.find('I');
	    int Y=str.find('Y');
	    if(I!=-1)
	    {
	        cout << "Indian\n";
	    }
	    else if(I==-1 && Y==-1)
	    {
	        cout << "Not sure\n";
	    }
	    else
	    {
	        cout << "Not Indian\n";
	    }
	}
}