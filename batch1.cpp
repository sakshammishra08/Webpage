#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums{25,46,15,96,24,10};
    vector<int> ans;
    int c=0;
    for(int i=0;i<nums.size();i++)
    {
        if(nums[i]<nums[i+1])
        {
            ans.push_back(c);
            c++;
        }
        else if(nums[i]>nums[i-1] && i!= 0)
        {
            c--;
            ans.push_back(c);
            c++;
        }
        else if(nums[i]>nums[i+1] && nums[i]> nums[i-1])
        {
            ans.push_back(c);
            c++;
        }
        else if()
    }
}

