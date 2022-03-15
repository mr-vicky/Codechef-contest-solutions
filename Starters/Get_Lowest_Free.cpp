// #include<iostream>
// using namespace std;

// int main()
// {
//     int t;
//     cin>>t;
//     while(t--)
//     {
//         int a, b, c;
//         if(a<b && a<c)
//         {
//             cout<<b+c<<"\n";
//         }
//         else if(b<a && b<c)
//         {
//             cout<<a+c<<"\n";
//         }
//         else if(c<a && c<b)
//         {
//             cout<<a+b<<"\n";
//         }
//         else if(a == b)
//         {
//             if((a+b)>c && a>c)
//             {
//                 cout<<a+b<<"\n";
//             }
//             else if((a+b)>c && a<c)
//             {
//                 cout<<a+c<<"\n";
//             }
//             else if((a+b)<c) 
//             {
//                 cout<<a+c<<"\n";
//             }
//         }// a == b
//         else if(c == b)
//         {
//             if((b+c)>c && b>a)
//             {
//                 cout<<b+c<<"\n";
//             }
//             else if((c+b)>a && c<a)
//             {
//                 cout<<c+a<<"\n";
//             }
//             else if((c+b)<a) 
//             {
//                 cout<<c+a<<"\n";
//             }
//         }// c == b
//         else if(a == c)
//         {
//             if((a+c)>b && a>b)
//             {
//                 cout<<a+c<<"\n";
//             }
//             else if((a+c)>b && a<b)
//             {
//                 cout<<a+b<<"\n";
//             }
//             else if((a+c)<b)
//             {
//                 cout<<a+b<<"\n";
//             }

//         }
//         else if(a == b && b == c)
//         {
//             cout<<a+b<<"\n";
//         }


//     }
//     return 0;
// }




#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a, b, c;
        cin>>a>>b>>c;
        if(a<b && a<c)
        {
            cout<<b+c<<endl;
           
        }
        else if(b<a && b<c)
        {
                cout<<a+c<<endl;
            
        }
        else if(c<a && c<b)
        {
            cout<<a+b<<endl;
        }
        else if(a == b )
        {
            if(a+b > c)
            {
                cout<<a+b<<endl;
            }
            else
            {
                cout<<a+c<<endl;
            }
            
        }
        else if(a == c )
        {
            if(a+c > b)
            {
                cout<<a+c;
            }
            else
            {
                cout<<a+b<<endl;
            }
            
        }
        else if(c == b )
        {
            if(c+b > a)
            {
                cout<<c+b<<endl;
            }
            else
            {
                cout<<c+a<<endl;
            }
         }
         else if(a == b && b == c && a == c)
         {
             cout<<a+b<<endl;
         }
        
    }   
    return 0;
}
