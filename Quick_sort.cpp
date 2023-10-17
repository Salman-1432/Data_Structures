#include <iostream>
using namespace std;
#define max 100

//int partition(int Arr[] ,int lb,int up);
int partition2(int Arr[], int lb, int up)
{
    int pivot = Arr[lb];
    int start = lb;
    int end = up;
    while (start < end)
    {
        while (Arr[start] <= pivot)
        {
            start++;
        }
        while (Arr[end] > pivot)
        {
            end--;
        }
        if (start < end)
        {
            int temp;
            temp = Arr[start];
            Arr[start] = Arr[end];
            Arr[end] = temp;
        }
    }
    Arr[lb]=Arr[end];
    Arr[end]=Arr[lb];
    return end;
}
int Quicksort(int Arr[], int lb, int up)
{
    if (lb < up)
    {
        int pivot;
        pivot = partition2(Arr, lb, up);
        Quicksort(Arr, lb, pivot - 1);
        Quicksort(Arr, pivot + 1, up);
    }
}

int main()
{
    int Arr[max];
    int n;
    cout<<"Enter the number:"<<endl;
    cin>>n;
    for(int start=0;start<n;start++)
    {
        cout<<"Enter the number:"<<start+1<<endl;
        cin>>Arr[start];
    }
    Quicksort(Arr,0,n-1);
    for(int start=0;start<n;start++)
    {
        cout<<Arr[start]<<" ";
    }
}