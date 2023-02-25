/**
* Time complexicity = O(N^2);
* Space complexcity = O(1);
* Best case T = O(N);
* Inplace
* Stable
*/


#include <bits/stdc++.h>

using namespace std;

class bubbleSort
{
public:
    void BubbleSort(int * p,int size)
    {
        for(int i=1;i<size;i++)
        {
            bool flag = false;
            for(int j=0;j<size-i;j++)
            {
                if(p[j]>=p[j+1])
                { 
                    // for descending change >= eith <= 
                    swap(p[j],p[j+1]);
                    flag=true;
                }
            }
            if(!flag)
                break; //by this complexicity in best case reducess
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
    bubbleSort *b=new bubbleSort();
    cout<<"Enter the size of array ";
    cin>>size;
    p=new int[size];
    cout<<"Enter the element of array";
    for(int i=0;i<size;i++)
    {
        cin>>p[i];
    }
    b->print(p,size);
    b->BubbleSort(p,size);
    b->print(p,size);
}