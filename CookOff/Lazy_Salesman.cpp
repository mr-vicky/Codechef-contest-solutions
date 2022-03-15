#include <iostream>
#include<algorithm>
using namespace std;

// void sortArr(int arr[], int n)
// {
//     for(int i = 0; i<n; i++)
//     {
//         for(int j = i+1; j<n; j++)
//         {
//             if(arr[i]>arr[j])
//             {
//                 int temp;
//                 arr[i] = arr[j]; 
//                 arr[j] = temp;
//             }
//         }
//     }
// }



int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, w;
        cin >> n >> w;
        int arr[n];
        int count = n;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            // sortArr(arr);
            // if(arr[i] >= w)
            // {
            //     count--;
            //     cout << count << endl;
            //     break;
            // }
        }

        int m = sizeof(arr)/sizeof(arr[0]);
        sort(arr, arr+n);

        for(int i =0 ; i < n; i++)
        {
            cout<"Shorted array: "<<arr[i]<<" ";
        }

    //     for(int i = 0; i<n; i++)
    //     {
            
    //         // cout<<a[i];
    //         if(arr[i] >= w)
    //         {
    //             count--;
    //             cout << count << endl;
    //             break;
    //         }
    //     }

    //     int sum = 0;
    //     if (count == n)
    //     {
    //         for (int i = 0; i < n && (sum <= w); i++)
    //         {
    //             sum = sum + arr[i];
    //             count--;
    //         }
    //         cout << count << endl;
    //     }
    }
    return 0;
}
