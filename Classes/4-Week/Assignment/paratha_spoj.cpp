#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool isPossibleSol(vector<int>cooksRank, int nP, int mid){
    int currP = 0; // initially prata count
    for(int i=0;i<cooksRank.size();i++){
        int R = cooksRank[i] , j = 1; //j=1,2.. count 1R+2R... 
        int timeTaken = 0;
        while (true)
        {
            if(timeTaken + j*R <= mid) // counting imp
            {
                ++currP;
                timeTaken += j*R;
                ++j;
            }
            else{
                break; // to stop the while loop
            }
        }
        if (currP >= nP)
        {
            return true;
        }   
    }
    return false;
}
int minTimeComplete(vector<int>cooksRank, int nP){
    int start = 0;
    int highestRank = *max_element(cooksRank.begin(),cooksRank.end());
    int end = highestRank * (nP * (nP+1) / 2);
    int ans = -1;

    while (start <= end)
    {
       int mid = (start + end)/2;
       if(isPossibleSol(cooksRank, nP, mid)){
        ans = mid;
        end = mid -1;
       }
       else{
        start = mid+1;
       }
    }
    return ans;
}

int main()
{
    int T; // time
    cin>>T;
    while (T--)
    {
        int nP, nC; //nP= prata, nC= cook
        cin>>nP>>nC;
        vector<int>cooksRank;
        while (nC--)
        {
            int R;
            cin>>R;
            cooksRank.push_back(R);
        }
        cout<<minTimeComplete(cooksRank,nP)<<endl;   
    }   
return 0;
}