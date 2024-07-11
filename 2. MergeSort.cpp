#include <iostream>
#include <vector>
using namespace std;
long long mergeAndCount(vector<int> &A, vector<int> &temp, int left, int mid, int right) {
    int i = left;   
    int j = mid + 1; 
    int k = left;   
    long long inv_count = 0;
    while ((i <= mid) && (j <= right)) {
        if (A[i] <= A[j]) {
            temp[k++] = A[i++];
        } else {
            temp[k++] = A[j++];
            inv_count += (mid - i + 1);
        }
    }
    while (i <= mid)
        temp[k++] = A[i++];
    while (j <= right)
        temp[k++] = A[j++];
    for (i = left; i <= right; i++)
        A[i] = temp[i];

    return inv_count;
}
long long mergeSortAndCount(vector<int> &A, vector<int> &temp, int left, int right) {
    long long inv_count = 0;
    if (left < right) {
        int mid = (left + right) / 2;
        inv_count += mergeSortAndCount(A, temp, left, mid);
        inv_count += mergeSortAndCount(A, temp, mid + 1, right);
        inv_count += mergeAndCount(A, temp, left, mid, right);
    }
    return inv_count;
}
int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    vector<int> temp(N);
    long long count = mergeSortAndCount(A, temp, 0, N - 1);
    cout << count << endl;
    return 0;
}
