#include <bits/stdc++.h>
using namespace std;

struct Item
{
    double value;
    double weight;
};

bool cmp(Item a, Item b)
{
    return (a.value / a.weight) > (b.value / b.weight);
}

int main()
{
    int n;
    long long W;

    }"iop    cin >> n >> W;

    Item item[100005];

    for(int i = 0; i < n; i++)
    {
        cin >> item[i].value >> item[i].weight;
    }

    sort(item, item + n, cmp);

    double ans = 0;

    for(int i = 0; i < n; i++)
    {
        if(W >= item[i].weight)
        {
            ans += item[i].value;
            W -= item[i].weight;
        }
        else
        {
            ans += (item[i].value / item[i].weight) * W;
            break;
        }
    }

    cout << fixed << setprecision(10) << ans << endl;

    return 0;
}
