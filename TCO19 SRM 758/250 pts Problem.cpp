#include<iostream>
#include <bits/stdc++.h>
using namespace std;
class LongJump2
{
 public:
    int x,j,max,ans;
    vector<int> jump;
 int countNewLeaders(int N,vector<int>jump)
        {
        max = jump[0];
    for(x=0;x<N;x++){
        for(j=x*3;j<(x+1)*3;j++){
            if(jump[j]>max){
                ans = x;
                }
            }
        }
     return(ans);
     }
   };
    
int main()
{
    LongJump2 obj1;
    int n,i,input;
    vector<int> jumpLengths;
    cin>>n;
    int total =n*3;
    for(i=0;i<total;i++){
        cin>>input;
        jumpLengths.push_back(input);
        }
    cout<<obj1.countNewLeaders(n,jumpLengths);
    return 0;
}