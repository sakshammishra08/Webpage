// A[i]<= A[j] <= A[k]
// i<j<k
#include <bits/stdc++.h>
using namespace std;

int solve1(vector<int> &A)
{
     int n=A.size();
    int ans=0;
    vector<int> right(n);
    for(int i=n-1;i>=0;i--)
    {
        if(i==n-1){right[i]=A[i];}
        else
            right[i]=max(right[i+1],A[i]);
    }

    set<int> s; 
    s.insert(A[0]);
    for(int i=1;i<n;i++)
    {
        s.insert(A[i]);
        auto it = s.end();
        if(it!=s.begin() && right[i]!=A[i])
            ans = max(ans,((*it) +A[i] + right [i]));
    }
    return ans;
 
}

int main()
{
   // vector<int> A{2, 5, 3, 1, 4, 9};

    //int a = solve1(A);
    int a = 4/10;
    cout<<a;
    
}


