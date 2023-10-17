#include<iostream>
using namespace std;
#include<vector>
/* void printvec(vector<int> v)
{
    cout<<"size :"<<v.size()<<endl;
    for(int i=0;i<v.size();i++)
    {
        //v.size()->O(1);
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    pair<int,string> p;
    p=make_pair(3,"abc");
    p={23,"salman"};
    pair<int,string> &p1=p;
    p1.first=45;
    cout<<p.first<<endl;
    cout<<p.second<<endl;
    int a[]={1,2,3};
    int b[]={2,3,4};
    pair<int ,int> p_array[3];
    p_array[0]={1,2};
    p_array[1]={2,3};
    p_array[2]={3,4};
    swap(p_array[0],p_array[2]);
    for(int i=0;i<3;i++)
    {
        cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
    } 
    pair<int,string> p;
    cout<<"Enter the any element of the equation:"<<endl;
    cin>>p.first;
    cout<<p.first;
    //vector<int> v(10); size of the vertor print the zeros
    vector<int> v(10,3);// print for same type value
    v.push_back(7);
    v.push_back(45);
    v.pop_back();
    v.pop_back();
    v.push_back(14);
    v.push_back(48);
    v.push_back(78);
    v.pop_back();
    v.pop_back();
     int n;
    cout<<"Enter the number size:"<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        printvec(v);//dynamic vector
        v.push_back(x);// time complexity O(1)
    } 
    printvec(v);
}
#include<iostream>
using namespace std;
#include<vector>
void printvec(vector<int>&v)
{
    cout<<"size :"<<v.size()<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    v.push_back(2);
    cout<<endl;
}
int main()
{
    vector<int> v;
    v.push_back(7);
    v.push_back(6);
    //printvec(v);
    //v.pop_back();// pop push time complexity is one
    printvec(v);// O(1)
    vector<int> &v2=v;// O(n)
    v2.push_back(5);
    printvec(v);
    printvec(v);

}*/
void printvec(vector <string> &v)
{
    cout<<"size:"<<v.size()<<endl;
    for(int i=0;i<v.size();i++)
    {
        //v.size()->o(1)
        cout<<v[i]<<endl;
    }
    cout<<endl;
}
int main()
{
    vector<string> v;
    int n;
    cout<<"enter the string:"<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        v.push_back(s);
    }
    printvec(v);
}