// Link to the question: https://www.codechef.com/START10C/problems/HARDBET

#include <iostream>
using namespace std;

int main() {
    int i,n,sa,sb,sc;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>sa>>sb>>sc;
        if((sa<sc) && (sa<sb))
        {
            cout<<"Draw"<<endl;
        }
        else if((sb<sc) && (sb<sa))
        {
            cout<<"Bob"<<endl;
        }
        else{
            cout<<"Alice"<<endl;
        }
    }
	return 0;
}