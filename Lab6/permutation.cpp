#include <iostream>
#include <vector>

void perm(int last, int first, std::vector<int> &arr){
    int temp;
    int a1 = arr[first];

    if(last == first){
        std::cout << "       ";
        for (int i=0; i<arr.size(); i++){
            std::cout << " " << arr[i];
        }
        std::cout << std::endl;
    } else {
        for (int i=first; i<=last; i++){
            temp = arr[first];
            arr[first] = arr[i];
            arr[i] = temp;

            perm(last, first+1, arr);

            temp = arr[first];
            arr[first] = arr[i];
            arr[i] = temp;

        }
    }
}

int main(){
    int n1 = 2;
    std::vector<int> arr1;
    for (int i=1; i<=n1; i++){
        arr1.push_back(i);
    }

    int n2 = 3;
    std::vector<int> arr2;
    for (int i=1; i<=n2; i++){
        arr2.push_back(i);
    }

    std::cout << "Input:\n        " << n1 << std::endl;
    std::cout << "Output:" << std::endl;
    perm(n1-1, 0, arr1);


    std::cout << "Input:\n        " << n2 << std::endl;
    std::cout << "Output:" << std::endl;
    perm(n2-1, 0, arr2);

    return 0;
}