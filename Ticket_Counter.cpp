//{ Driver Code Starts
#include<bits/stdc++.h>
#include<deque>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int distributeTicket(int n, int k) {
        // code here
        deque<int> q;
        for (int i=0; i<n; i++){
            q.push_back(i+1);
        }
        int i=1;
        while (q.size()>k){
            if (i%2==1){
                for (int j=0; j<k; j++){
                    q.pop_front();
                }
            }
            if (i%2==0){
                for (int j=0; j<k; j++){
                    q.pop_back();
                }
            }
            i++;
        }
        if (i%2==0){
            auto ans=q.begin();
            return *ans;
        }
        if (i%2==1){
            auto ans=--q.end();
            return *ans;
        }
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int N;
        scanf("%d",&N);
        
        
        int K;
        scanf("%d",&K);
        
        Solution obj;
        int res = obj.distributeTicket(N, K);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends