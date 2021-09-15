#include <iostream>

int findMaxSumAdjacentPair(int arr[], int size);
int findMaxSumAdjacentTrip(int arr[], int size);
int findMaxSumAdjacentN(int arr[], int size, int n);

int main(){
    int arraySize = 10;

    int arr[arraySize] = {10,3,2,1,5,5,3,2,7,4};

    int maxSum = findMaxSumAdjacentPair(arr, 10);
    int maxTrip = findMaxSumAdjacentTrip(arr, 10);

    std::cout << "Max Sum = " << maxSum << std::endl;
    std::cout << "Max Triplet = " << maxTrip << std::endl;
    std::cout << "Max n = " << findMaxSumAdjacentN(arr, 10, 5) << std::endl;

}

int findMaxSumAdjacentPair(int arr[], int size){
    int tempSum = 0;
    int maxSum = 0;

    for(int i = 0; i < size-2; i++){
        //add arri and i+1
        tempSum = arr[i] + arr[i+1];

        if(tempSum > maxSum){
            maxSum = tempSum;
        }
    }

    return maxSum;

}

int findMaxSumAdjacentTrip(int arr[], int size){
    int tempSum = 0;
    int maxSum = 0;

    for(int i = 0; i < size-2; i++){
        //add arri and i+1
        tempSum = arr[i] + arr[i+1] + arr[i+2];

        if(tempSum > maxSum){
            maxSum = tempSum;
        }
    }

    return maxSum;

}

int findMaxSumAdjacentN(int arr[], int size, int n){
    int tempSum = 0;
    int maxSum = 0;
    int reps = size+1-n;

    for(int i = 0; i < reps; i++){
        tempSum = 0;
        for(int j = i; j < i+n; j++){
            tempSum += arr[j];

        }

        if(tempSum > maxSum){
            maxSum = tempSum;
        }
    }

    return maxSum;

}