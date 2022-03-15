#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x, y, z;
        cin>>x>>y;
        z = 21-(x+y);
<<<<<<< HEAD
        (z >= 1 && z <= 10)?cout<<"z\n":cout<<"-1\n";
=======
        if(z >= 1 && z <= 10)
        {
            cout<<z<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }
>>>>>>> f6fe0db23363ac8977af5c2d62620290d5c0a704
    }
    return 0;
}
