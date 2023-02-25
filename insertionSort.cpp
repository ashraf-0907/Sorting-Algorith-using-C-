/**
* Time complexicity = O(N^2);
* Space complexcity = O(1);
* Best case T = O(N);
* Inplace
* Stable
*/


#include <bits/stdc++.h>

using namespace std;

class insertionSort
{
private:
    /* data */
public:
    void InsertionSort(int * p , int size)
    {
        for(int i=1;i<size;i++)
        {
            int j=i-1;
            int temp=p[i];
            while(j>=0)
            {
                if(p[j]>temp)
                {
                    //shift
                    p[j+1]=p[j];
                }
                else{
                    break;
                }
                j--;
            }
            swap(p[j+1],temp);
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
    insertionSort *b=new insertionSort();
    cout<<"Enter the size of array ";
    cin>>size;
    p=new int[size];
    cout<<"Enter the element of array";
    for(int i=0;i<size;i++)
    {
        cin>>p[i];
    }
    b->print(p,size);
    b->InsertionSort(p,size);
    b->print(p,size);
}

