// https://www.hackerearth.com/practice/data-structures/trees/heapspriority-queues/practice-problems/algorithm/monk-and-the-magical-candy-bags/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        multiset<ll> bags;
        for (int i = 0; i < n; i++)
        {
            ll candy_ct;
            cin >> candy_ct;
            bags.insert(candy_ct);
        }
        ll total_candies = 0;
        for (int i = 0; i < k; i++)
        {
            auto last_it = (--bags.end());
            ll candy_ct = *last_it;
            total_candies += candy_ct;
            bags.erase(last_it);
            bags.insert(candy_ct / 2);
        }
        cout << total_candies << endl;
    }
    return 0;
}