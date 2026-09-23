#include<iostream>
#include<vector>
using namespace std;

struct Activity
{
    char name[10];
    int start_time;
    int finish_time;
};

int main()
{
    int n;
    cout << "Enter the no, of Items : ";
    cin >> n;
    Activity activity[n];

    for(int i=0;i<n;i++){
        cout << "Enter the name of Item "<< i+1 << " : ";
        cin >> activity[i].name;
        cout<< "Enter the start time "<< i+1 << " : ";
        cin >> activity[i].start_time;
        cout << "Enter the finish time "<< i+1 << " : ";
        cin >> activity[i].finish_time;
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(activity[i].finish_time > activity[j].finish_time){
                Activity temp = activity[i];
                activity[i]=activity[j];
                activity[j]=temp;
            }
        }
    }
    vector<string>selected_activity;
    selected_activity.push_back(activity[0].name);
    int last_finish_time = activity[0].finish_time;
    int count = 1;

    for(int i=0;i<n;i++){
         if(activity[i].start_time >=last_finish_time){
          selected_activity.push_back(activity[i].name);
         last_finish_time = activity[i].finish_time;
        count++;
        }
    }
    cout << "Total no.of selected activity : "<< count << endl;
    cout << "Selected activity are : "<< endl;
    for(int i=0;i<selected_activity.size();i++){
        cout << selected_activity[i] << endl;
    }
    return 0;
}
