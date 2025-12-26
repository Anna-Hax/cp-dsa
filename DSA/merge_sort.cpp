#include <iostream>
#include <vector>
using namespace std;
void merge(vector<int> &arr, int low, int mid, int high){
    vector<int> temp;
    int left = low;
    int right = mid+1;

    while (left<= mid && right <= high){
        if (arr[left] <= arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }
    }

    if (left <= mid){
        temp.push_back(arr[left]);
        left++;
    } else if (right <=high){
        temp.push_back(arr[right]);
    }

    for (int i = low; i <=high; i++){
        arr[i] = temp[i-low];
    }
}
void mergeSort(vector<int> &arr, int low, int high){

    if (low>=high){
        return;
    };

    int mid = (low + high)/2;
    mergeSort(arr, low, mid);
    mergeSort(arr, mid+1, high);
    merge(arr, low, mid, high);
}

int main(){

    int n;
    cin >> n;

    int x;
    vector<int> arr;

    for (int i = 0; i < n; i++){
        cin >> x;
        arr.push_back(x);
    }

    mergeSort(arr, 0, n-1);
    
    for (int j = 0; j < n; j++){
        cout << arr[j] << " ";
    }

    return 0;

}