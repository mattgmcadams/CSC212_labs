#include <iostream>
#include <vector>

using namespace std;

void InsertionSortA(vector<int> &a);

void InsertionSortB(vector<int> &a);

vector<int> InsertionSortRecursive(vector<int> a);

void InsertionSort(vector<int> &arr, bool reverse);

int main(int argc, char **argv) {
    // Both arrays contain the same elements in a different order
    vector<int> arr1 = {37, 7, 12, 9, 50, 26, 38, 4, 9, 33};
    vector<int> arr2 = {33, 9, 4, 38, 26, 50, 9, 12, 7, 37};

    // The arrays should end up identical
    InsertionSortA(arr1);
    InsertionSortB(arr2);

    cout << "Insertion Sort A:" << endl;
    for (auto val : arr1){
        cout << val << " ";
    }
    cout << endl;
    cout << "Insertion Sort B:" << endl;
    for (auto val : arr2){
        cout << val << " ";
    }
    cout << endl;



    // These are for the reverse selection
    vector<int> arr3 = {33, 9, 4, 38, 26, 50, 9, 12, 7, 37};
    vector<int> arr4 = {33, 9, 4, 38, 26, 50, 9, 12, 7, 37};

    InsertionSort(arr3, false);
    InsertionSort(arr4, true);

    cout << "Selection Sort:" << endl;
    for (auto val : arr3){
        cout << val << " ";
    }
    cout << endl;

    cout << "Selection Sort (reversed):" << endl;
    for (auto val : arr4){
        cout << val << " ";
    }
    cout << endl;

    // For the Recursive solution
    vector<int> arr5 = {33, 9, 4, 38, 26, 50, 9, 12, 7, 37};





    return 0;
}

void InsertionSortA(vector<int> &a) {

    int x, j, i=1;
    while ( i < a.size() ) {
        x = a[i];
        j = i - 1;
        while ( j >= 0 && a[j] > x) {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = x;
        i++;
    }
}

void InsertionSortB(vector<int> &a) {
    //i ← 1
    int j, i = 1;
    //while i < length(A)
    while ( i < a.size() ){
        //j ← i
        j = i;
        //while j > 0 and A[j-1] > A[j]
        while( j > 0 && a[j - 1] > a[j]) {
            //swap A[j] and A[j-1]
            int temp = a[j];
            a[j] = a[j-1];
            a[j-1] = temp;
            //j ← j - 1
            j--;
        //end while
        }
        //i ← i + 1
        i++;
    //end while
    }
}

void InsertionSort(vector<int> &arr, bool reverse) {
    int length = arr.size();
    if(reverse) {
        for (int i = 0; i < (length - 1); i++) {
            int minValIdx = i;
            for(int j=i+1; j < length; j++) {
                if(arr[minValIdx] < arr[j]) {
                    minValIdx = j;
                }
            }
            double temp = arr[i];
            arr[i] = arr[minValIdx];
            arr[minValIdx] = temp;
        }
    } else {
        for (int i = 0; i < (length - 1); i++) {
            int minValIdx = i;
            for(int j=i+1; j < length; j++) {
                if(arr[minValIdx] > arr[j]) {
                    minValIdx = j;
                }
            }
            double temp = arr[i];
            arr[i] = arr[minValIdx];
            arr[minValIdx] = temp;
        }
    }
}

