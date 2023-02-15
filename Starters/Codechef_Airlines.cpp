#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int t=0;
    cin>>t;
    while(t--)
    {
        int x, y, z;
        cin>>x>>y>>z;

        if(10*x>=y)
            cout<<y*z<<endl;
        else 
            cout<<x*10*z<<endl;
    }
	return 0;
}
