    #include<iostream>
    #include<cmath>
    using namespace std;
    typedef long long int ll;

    int main()
    {
        ll t;
        cin>>t;
        while(t--)
        {
            ll n, x;
            cin>>n>>x;
            ll arr[n];
            for(int i = 0; i<n; i++)
                cin>>arr[i];

        ll sum = 0;
        for(int i = 0; i<n; i++)
        {
                sum += arr[i];
        }

        ll time_less = ceil(sum/x);
        ll time_more = (x/sum)+1;

        //    if(n<time)
        //    {
        //        cout<<n;
        //    }
        //    else if(sum < x)
        //    {
        //        cout<<ceil(x/sum);
        //    }
        //    else
        //    {
        //        cout<<time;
        //    } 

            if(sum > x)
            {
                if(n<time_less) cout<<n;
                else if(n>time_less)  cout<<time_less;
                else cout<<n;
            }
            else if(sum < x)
            {
                if(n<time_more) cout<<time_more;
                else if(n>time_more) cout<<time_more;
                else cout<<n;
                // cout<<time_more;
            }
            else 
            {
                cout<<"1";
            }

        cout<<"\n";
        }

        // cout<<"ceil: "<<ceil(1.1);

        return 0;
    }
