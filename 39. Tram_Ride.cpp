#include<bits/stdc++.h>
using namespace std;
long long solve (int N, int start, int finish, vector<int> &ticket_cost) 
{
    start--; 
    finish--; 
    if (start == finish) return 0; 
    long long clockwise_cost = 0;
    int s = start;
    while (s != finish) 
    {
        clockwise_cost += ticket_cost[s];
        s = (s + 1) % N;
    }
    long long counterclockwise_cost = 0;
    s = start;
    while (s != finish) 
    {
        s = (s - 1 + N) % N;
        counterclockwise_cost += ticket_cost[s];
    }
    return min(clockwise_cost, counterclockwise_cost);
}
int main() 
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin >> N;
    int start;
    cin >> start;
    int finish;
    cin >> finish;
    vector<int> Ticket_cost(N);
    for(int i_Ticket_cost = 0; i_Ticket_cost < N; i_Ticket_cost++)
    {
    	cin >> Ticket_cost[i_Ticket_cost];
    }
    long long out_;
    out_ = solve(N, start, finish, Ticket_cost);
    cout << out_;
}
