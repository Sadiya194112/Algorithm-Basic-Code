#include<iostream>
#include<algorithm>
using namespace std;

// A structure to represent a job
struct Job{
    string id;
    int deadline;
    int profit;
};

// This function is used for sorting all the jobs according to the profit
bool compare(Job a, Job b){
  return (a.profit > b.profit);
}

void job_schedule(Job arr[], int n){
      // Sort all jobs according to decreasing order of profit
    sort(arr, arr+n, compare);

    int result[n]; // To store result
    bool slot[n];
    // Initialize all slots to be free
    for (int i=0; i<n; i++)
    slot[i] = false;

    int mx_profit=0;
    for (int i=0; i<n; i++){
        // Find a free slot for this job (Note that we start
        // from the last possible slot)
        for (int j=min(n, arr[i].deadline)-1; j>=0; j--){
            // Free slot found
            if (slot[j]==false){
              result[j] = i; // Add this job to result
              slot[j] = true; // Make this slot occupied
              mx_profit += arr[i].profit;
              break;
            }
        }
    }

      // Print the result
        for (int i=0; i<n; i++){
            if (slot[i]){
                cout << arr[result[i]].id << " ";
            }
        }
        cout<<"\n\n";
        cout<<"Max Profit is: "<<mx_profit<<endl;
    }


int main(){
    int n;  cin>>n;
    Job arr[n+3];
    for(int i=0; i<n; i++){
        cin>>arr[i].id>>arr[i].deadline>>arr[i].profit;
    }
    cout<<endl;
    cout << "Maximum profit sequence of jobs is--> ";
    job_schedule(arr, n);

    return 0;
}

