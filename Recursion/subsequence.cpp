// Function to print all subsequences of an array using recursion
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void printf(int ind, vector<int> &ds, int a[], int n)
{
    if (ind == n)
    {
        for (auto it : ds)
        {
            cout << it << " ";
        }
        if(ds.size()==0)
        cout<<"{}";
        cout << endl;
        return;
    }
    // take or pick particular index into the subsequence
    ds.push_back(a[ind]);
    printf(ind+1,ds,a,n);
    ds.pop_back();
    //not pick or not take condition,this element is not added to your subsequence
    printf(ind+1,ds,a,n);

}
int main()
{
    int a[] = {3, 1, 2};
    int n = 3;
    vector<int> ds;
    printf(0, ds, a, n);
    return 0;
}