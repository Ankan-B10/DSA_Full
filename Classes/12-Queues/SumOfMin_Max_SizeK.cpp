#include<iostream>
#include<deque>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
    int maxSlidingWindow(vector<int>& nums, int k) {
        deque<int> dq, dq2;
        int ans = 0;

        //first window of k size
        for(int i=0; i<k; i++){
            //chote element remove krdo, 
            while(!dq.empty() && nums[i] >= nums[dq.back()]) {
                dq.pop_back();
            }
            //big element remove
              while(!dq2.empty() && nums[i] <= nums[dq2.back()]) {
                dq2.pop_back();
            }
            //inserting index, so tht we can checkout of window element
            dq.push_back(i);
            dq2.push_back(i);
        }

        //store answer for first window
        ans += nums[dq.front()] + nums[dq2.front()];

        //remaining windows ko process
        for(int i=k; i<nums.size(); i++) {
            //out of window element ko remove krdia 
            if(!dq.empty() && i-dq.front() >= k) {
                dq.pop_front();
            }
              if(!dq2.empty() && i-dq2.front() >= k) {
                dq2.pop_front();
            }

            //ab ferse current element k liyue chotte element 
            //ko remove krna h 
            while(!dq.empty() && nums[i] >= nums[dq.back()]) {
                dq.pop_back();
            }
            while(!dq2.empty() && nums[i] >= nums[dq2.back()]) {
                dq2.pop_back();
            }
            //inserting index, so tht we can checkout of window element
            dq.push_back(i);
            dq2.push_back(i);

            //current window ka answer store krna h 
            ans += nums[dq.front()] + nums[dq2.front()];

        }
        return ans;
    }
int main()
{
    vector<int>v{2,5,-1,7,-3,-1,-2};
    int k = 4;
    cout<<maxSlidingWindow(v,k);

return 0;
}