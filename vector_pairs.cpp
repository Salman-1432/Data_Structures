#include<iostream>
#include<vector>
using namespace std;
// we can say that pair are used for relation mentain

void printVec(vector<int> &v)
{
    cout<<"size:"<<v.size()<<endl;
    for(int i=0;i<v.size();i++)
    {// v.size() is a funcrion this give the current size of the array
        cout<<v[i]<< " ";// v.size()->o(1);
    }
    v.push_back(2);
    cout<<endl;
    
} 
/* 
int main()
{
    //pair<int,string> p;// data type like here anything data type
    // p variable
    //p=make_pair(2,"abc");
    //cout<<p.first<<" "<<p.second<<endl;
    // we are used of the first value
    // for first value and second value
    // for second value
    //pair<int ,string> p1=p;// assign the copy of p value
    //pair<int ,string> &p1=p;// we are assign refrence of the p value
    //p1.first=3;
    //cout<<p.first<<" "<<p1.second<<endl;
    //int a[]={1,2,3};
    //int b[]={2,3,4};
   // pair<int ,int > p_array[3]; // i have declare of the array whose is size is three
    //p_array[0]={1,2};
   // p_array[1]={2,3};
    //p_array[2]={3,4};
    //swap(p_array[0],p_array[2]);
    //for(int i=0;i<3;i++)
    //{
        //cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
   // }
    //cin>>p.first;
    //cout<<p.first;
   // int a[10]; // size of array cannot change;
    // because these is the dynamically size of array
    vector<int> v;// we can change of the vector array;
    //vector<pair<int ,int>>// vaector of pair we van put anything in this vector
    int n;// size of array:
    cout<<"Enter the size of the arraY;"<<endl;
    cin>>n;// size of
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        printVec(v);
        v.push_back(x); //0(1)// append the value in last of the array;
    } 
    printVec(v);
}
 */
int main()
{
    vector<int> v;
    v.push_back(7);
    v.push_back(6);
   // printVec(v);
   // v.pop_back();// pop means remove last value of the array
    //printVec(v);// o(1)
    vector <int> &v2 =v; // in v2 one one copy of the element v// o(n)
    v2.push_back(5);
    printVec(v);
    printVec(v);
    printVec(v2);
   // printVec(v2);

}