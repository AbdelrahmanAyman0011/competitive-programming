#include <bits/stdc++.h>
using namespace std;

void fun (vector<int> &arr){
    for(int i = 0; i < (int) arr.size(); i++){
        int key = arr[i];
        int j = i - 1;
        
        while(j >= 0 and arr[j] > key){
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main()
{  
    vector<int> arr = {10 , 20 , 30 , 40 , 17};
    fun(arr);
    int n = arr.size();
    int i = 0;
    while(n--){
        cout << arr[i++]<< " ";
    }
    return 0;
}
