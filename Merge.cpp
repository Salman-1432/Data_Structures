#include <iostream>
using namespace std;
/* int merge(int arr[], int l, int m, int r)
{
    int temptppe[10];
    int i = l, j = m + 1, k = 0;
    while (i <= m && j <= r)
    {
        if (arr[i] <= arr[j])
            temptppe[k++] = arr[i++];
        if (arr[i] >= arr[j])
            temptppe[k++] = arr[j++];
    }

    while (arr[i] <= m)
    {
        temptppe[k++] = arr[i++];
    }
    while (arr[j] <= r)
    {
        temptppe[k++] = arr[j++];
    }

    i = 1;
    k = 0;
    while (i <= r)
    {
        arr[i++] = temptppe[k++];
    }
    //return ;
}
int mergesort(int arr[], int l, int r)
{
    if (l < r)
    {
        int m = (l + r) / 2;
        mergesort(arr, l, m);
        mergesort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
    //return ;
}
int main()
{
    int arr[10] = {1, 2, 4, 5, 6, 2, 8, 9, 5, 8};
    mergesort(arr, 0, 9);
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " "; // cout<<"salman:"<<endl;
    }
    cout << endl;
    return 0;
}
*/
void M(int *A, int l, int mid, int r)
{
    int tempA[10];
    int i = l, j = mid + 1, k = 0;
    while (i <= mid && j <= r)
    {
        if (A[i] <= A[j])
        {
            tempA[k++] = A[i++];
        }
        else
        {
            tempA[k++] = A[j++];
        }
    }
    if (l > mid)
    {
        while (i <= mid)
        {
            tempA[k++] = A[i++];
        }
    }
    while (A[j] <= mid)
    {
        tempA[k++] = A[j++];
    }
    i = 1, k = 0;
    while (A[i] <= r)
    {
        A[i++] = tempA[k++];
    }
}
void MS(int *A, int l, int r)
{
    if (l < r)
    {
        int mid = (l + r) / 2;
        MS(A, l, mid);
        MS(A, mid + 1, r);
        M(A, l, mid, r);
    }
}
int main()
{
    int A[10] = {10, 4, 8, 12, 78, 14, 21, 8, 14, 78};
    MS(A, 0, 9);
    for (int i = 0; i < 10; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
    return 0;
}