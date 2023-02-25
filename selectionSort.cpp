/**
* Time complexicity = O(N^2);
* Space complexcity = O(1);
* Best case T = O(N);
*/


#include <bits/stdc++.h>

using namespace std;

class selectionSort
{
public:
    void SelectionSort(int * p,int size)
    {
        for(int i=0;i<size;i++)
        {
            int minIndex=i;
            for(int j=i+1;j<size;j++)
            {
                if(p[j]<=p[minIndex]) // for descending change <= eith >= 
                minIndex=j;
            }
            swap(p[minIndex],p[i]);
        }
    }
    void print (int * p,int n)
    {
        for(int i=0;i<n;i++)
        {
            cout<<" "<<p[i];
        }
        cout<<endl;
    }
};

int main()
{
    int size;
    int * p;
    selectionSort *b=new selectionSort();
    cout<<"Enter the size of array";
    cin>>size;
    p=new int[size];
    cout<<"enter the elements of the array";
    for(int i=0;i<size;i++)
    {
        cin>>p[i];
    }
    b->print(p,size);
    b->SelectionSort(p,size);
    b->print(p,size);
}

