#include <iostream>
using namespace std;
int  insertionsort(int Arr[], int n)
{
    cout << "Enter number for insrtion sort:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> Arr[i];
    }
    //cout<<"salman:"<<endl;
    for (int i = 1; i < n; i++)
    {
        //cout<<"inside the proagram:"<<endl;
        int k = Arr[i];// assign the value of the second index
        int j;
        for(j=i-1;j>=0 && k<Arr[j];j--)//for insertion operation function;
            Arr[j + 1] = Arr[j];
        Arr[j + 1] = k;
    }
    for (int i = 0; i < n; i++)
    {
        cout << "show the number" << Arr[i] << " " << endl;
    }
}
int main()
{

    int Arr[5];
    int size = sizeof(Arr) / sizeof(int);
    int p = insertionsort(Arr, size);
}