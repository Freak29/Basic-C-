//Array and heap interview problem
//contributing for hacktoberfest2021


#include<bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    vector<int>kSort(int arr[], int n, int k){
        priority_queue<int, vector<int>, greater<int>>min_heap;
        vector<int>v;
        for(int i=0; i<n; i++){
            min_heap.push(arr[i]);
            if(min_heap.size()>k){
                v.push_back(min_heap.top());
                min_heap.pop();
            }
        }
        while(min_heap.size()>0){
            v.push_back(min_heap.top());
            min_heap.pop();
        }
        return v;
    }
};
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        
        int arr[n];
        for(int i = 0; i < n;i++)
            cin>>arr[i];
        Solution ob;
        vector<int> result = ob.kSort(arr, n, k);
        for (int i = 0; i < result.size(); ++i)
            cout<<result[i]<<" ";
        cout << endl;
        
    }
    return 0;
}
