#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// To print all the subsequences
//  void printS(int ind,vector<int> &ds,int s,int sum,int arr[],int n)
//  {
//      if(ind==n)
//      {
//          if(s==sum){
//              for(auto it : ds) cout<< it << " ";
//              cout<<endl;
//          }
//          return;
//      }
//      ds.push_back(arr[ind]);
//      s += arr[ind];
//      printS(ind +1,ds,s,sum,arr,n);
//      s-= arr[ind];
//      ds.pop_back();
//      //not pick
//       printS(ind+1,ds,s,sum,arr,n);

// }
// To print any 1 subsequence
// bool printS(int ind, vector<int> &ds, int s, int sum, int arr[], int n)
// { // conditin satisfied
//     if (ind == n)
//     {
//         if (s == sum)
//         {
//             for (auto it : ds)
//                 cout << it << " ";
//             cout << endl;
//             return true;
//         }
//         // condition not satisfied
//         else
//             return false;
//     }
//     ds.push_back(arr[ind]);
//     s += arr[ind];
//     if (printS(ind + 1, ds, s, sum, arr, n) == true)
//         return true;
//     s -= arr[ind];
//     ds.pop_back();
//     // not pick
//    if(printS(ind + 1, ds, s, sum, arr, n)==true)
//     return true;
//     return false;
// }
// count the no. of subsequences:-
int printS(int ind,  int s, int sum, int arr[], int n)
{ // conditin satisfied
    if (ind == n)
    {
        if (s == sum)

            return 1;

        // condition not satisfied
        else
            return 0;
    }
    
    s += arr[ind];
    int l = printS(ind + 1,  s, sum, arr, n);

    s -= arr[ind];
    // not pick
    int r = printS(ind + 1, s, sum, arr, n);
    return l + r;
}
int main()
{
    int arr[] = {1, 2, 1};
    int n = 3;
    int sum = 2;
    
    cout<< printS(0, 0, sum, arr, n);
}