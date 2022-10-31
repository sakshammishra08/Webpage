#include<bits/stdc++.h>
using namespace std;


int countRev (string s)
{
    vector<char> temp;
    int cnt=0;
    for(int i=0;i<s.size();i++){
        if(i!=0 && (temp.back() == '{' && s[i] == '}')){
            temp.pop_back();
        }
        else
        temp.push_back(s[i]);
    }
    if(temp.size() % 2 != 0)return -1;

    int i=0; 

    while(i < temp.size()/2){
        if(temp[i] == '}') cnt++;

        i++;
    }  
    while(i < temp.size()){
        if(temp[i] == '{') cnt++;
        i++;
    } 
   return cnt;

    
}
int main()
{
  string s = "}{{}}{{{";
  int ans = countRev(s);
//   for(int i=0;i<ans.size();i++)
//   {
//     cout<<ans[i]<<" "; 
//   }
  cout<<ans;
}