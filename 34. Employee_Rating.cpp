#include<bits/stdc++.h>
using namespace std;
int solve (int N, vector<int> workload) 
{
   int max_len = 0, curr_len = 0;
    for(int i = 0; i < N; i++) 
    {
        if(workload[i] > 6) 
        {
            curr_len++;
            max_len = max(max_len, curr_len);
        } 
        else 
        {
            curr_len = 0;
        }
    }
    return max_len;
}
int main() 
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin >> N;
    vector<int> workload(N);
    for(int i_workload = 0; i_workload < N; i_workload++)
    {
    	cin >> workload[i_workload];
    }
    int out_;
    out_ = solve(N, workload);
    cout << out_;
}
