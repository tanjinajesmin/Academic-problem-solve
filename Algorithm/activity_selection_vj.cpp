#include <bits/stdc++.h>
using namespace std;

struct Activity
{
int start;
int finish;
};

bool cmp(Activity a, Activity b)
{
return a.finish < b.finish;
}

int main()
{
int n;
cin >> n;

Activity activity[100005];

for(int i = 0; i < n; i++)
{
    cin >> activity[i].start >> activity[i].finish;
}

sort(activity, activity + n, cmp);

int count = 1;
int lastFinish = activity[0].finish;

for(int i = 1; i < n; i++)
{
    if(activity[i].start > lastFinish)
    {
        count++;
        lastFinish = activity[i].finish;
    }
}

cout << count << endl;

return 0;

}
