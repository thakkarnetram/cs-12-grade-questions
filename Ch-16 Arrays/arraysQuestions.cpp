#include <iostream>
#include <algorithm>

using namespace std;
// Linear Search Code
//# include < iostream.h >
//void main ( )
//{
//    int A[5], i, data, flag = 0;
//    cout < < “Enter five values”;
//    for (i = 0; i < 5; i++)
//        cin > > A [i];
//    cout << ‘Enter data to be searched”;
//    cin >> data;
//    for (i=0; i < 5; i ++)
//    {
//    if (A[i] = = data)
//    flag = 1;
//    }
//    if (flag = = 1)
//    cout < < “Data present”;
//    else cout << “Data not present”;
//}

/*/ / Binary search
# include < iostream.h >
    const int N = 10;
    void main ( )
    {
    int A[N], i, initial, final, mid, data;
    cout < < “Enter nine values in ascending order”;
    for (i = 0; i < N; i++)
    cin >> A [ i ];
    cout << “Enter data to be searched”;
    cin >> data;
    initial = 0;
    final = N - 1;
    mid = (initial + final) / 2;
    While ((initial < = final) & & (A[mid]! = data))
    {
    if (A [mid] > data)
    final = mid - 1;
    else
    initial = mid + 1;
    }
    if (A [mid] = = data)
    cout << “data is present”;
    if (initial > final)
    cout <<“data not present in the list”;
}*/

// traverse arrays
void findMaxInArray() {
    int T, a[5], x;
    cout << "Enter Some 5 values " << endl;
    for (int i = 0; i < 5; i++) {
        cin >> a[i];
    }
    T = a[0];
    for (int i = 1; i < 5; i++) {
        if (T < a[i]) {
            T = a[i];
            cout << T << endl;
        }
    }
}

// linear search algo
void linearSearchAlgo() {
    int A[5], data, flag;
    cout << "Enter Five Values " << endl;
    for (int x = 0; x < 5; x++) {
        cin >> A[x];
    }
    cout << "Enter data to be Searched " << endl;
    cin >> data;
    flag = 0;
    for (int i = 0; i < 5; i++) {
        if (A[i] == data) {
            flag = 1;
            break;
        }
    }
    if (flag == 1) {
        cout << "Data Present " << endl;
    } else {
        cout << "Data Not Present " << endl;
    }
}

// Binary Search Algo
int binarySearchAlgo(int arr[], int size, int data) {
    sort(arr, arr + size);
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    while (start <= end) {
        if (arr[mid] == data) {
            return mid;
        }
        if (data > arr[mid]) {
            start = mid + 1;
        } else if (data < arr[mid]) {
            end = mid - 1;
        }
        mid = start + (end - start) / 2; // Updating mid again
    }
    return -1; // -1 if not found
}

// Bubble sort algo
// compares every i and i+1 number and swaps if i > i+1
void bubbleSortAlgo(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap((arr[j]), (arr[j + 1]));
            }
        }
    }
}

// Selection Sort Algo
// current mini last minimum compare and swap till n-1
void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex])
                minIndex = j;
        }
        swap(arr[minIndex], arr[i]);
    }
}

// Insertion Sort algo
// starts from arr[1] , temp for storing arr[1] .
void insertionSort(int n, int arr[]) {
    for (int i = 1; i < n; i++) {
        int temp = arr[i];
        int j = i - 1;
        for (; j >= 0; j--) {
            if (arr[j] > temp)
                arr[j + 1] = arr[j];
            else
                break;
        }
        arr[j + 1] = temp;
    }
}


int main() {
//   cout << "Hello, World!" << endl;
//    findMaxInArray();
//    linearSearchAlgo();
//    int arr[5] = {6, 2, 4, 16, 1};
//    int res = binarySearchAlgo(arr, 5, 6);
//    if (res != -1)
//        cout << "Data Found " << res << endl;
//    else
//        cout << "Data not found " << res << endl;

//    int arr2[5] = {6, 2, 7, 23, 1};
//    bubbleSortAlgo(arr2, 5);
//    for (int i: arr2) {  //  for (int i = 0 ; i < size ; i++ ) old // New for ( int i : arrays,vectors or any iterable type)
//        cout << i << " ";
//    }
//    cout << endl;

//    int arr3[5] = {0, 7, 13, 13, 5};
//    selectionSort(arr3, 5);
//    for (int x: arr3) {
//        cout << x << " ";
//    }

//    int arr[5] = {4, 3, 1, 24, 5};
//    insertionSort(5, arr);
//    for (int x: arr)
//        cout << x << " ";
    return 0;
}
