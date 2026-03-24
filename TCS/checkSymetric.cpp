// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n=5;
//     int pair[5][2] = {{1,2},{4,5},{3,1},{5,4}, {2,1}};
//     cout<<"Semetric pairs are - "<<endl;
//     for(int i=0; i<n; i++){ //loop for 1st element
//         for(int j=i+1; j<n; j++){ //loop for 2nd element in pair
//             if(pair[i][0]==pair[j][1] && pair[i][1]==pair[j][0])
//             {
//                 cout<<"("<<pair[i][1]<<" "<<pair[i][0]<<")"<<" ";
//                 break;
//             }
//         }
//     }
// return 0;
// }

//using map - TC=0(n)
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=5;
    int pair[5][2] = {{1,2},{4,5},{3,1},{5,4}, {2,1}};
    unordered_map<int, int>mp;
    cout<<"Semetric pairs are - "<<endl;
    for(int i=0; i<n; i++){ 
        int first = pair[i][0];
        int second = pair[i][1];
        if(mp.find(second)!= mp.end() && mp[second] == first)
        {
            cout<<"("<<first<<" "<<second<<") ";
        }
        //if not common , store them also
        else
            mp[first] = second;
    }
return 0;
}