#include <bits/stdc++.h>

using namespace std;

class binaryInsertionSort
{
private:
    /* data */
public:
    int binarySearch(int *p, int low, int high, int key)
    {
        int mid = (low + high) / 2;
        if (p[mid] >= key && p[mid - 1] < key)
        {
            return mid;
        }
        else if (p[mid - 1] > key)
        {
            return binarySearch(p, low, mid - 1, key);
        }
        else
            return binarySearch(p, mid + 1, high, key);
    }
    void BinaryInsertionSort(int *p, int size)
    {
        for (int i = 1; i < size; i++)
        {
            int temp = p[i];
            if (i > 3)
            {
                int j=i-1;
                int pos = binarySearch(p, 0, i, temp);
                
                while (j>=pos)
                {
                    p[j + 1] = p[j];
                    j--;
                }
                p[pos]=temp;
            }
            else
            {
                int j = i - 1;

                while (j >= 0)
                {
                    if (p[j] > temp)
                    {
                        // shift
                        p[j + 1] = p[j];
                    }
                    else
                    {
                        break;
                    }
                    j--;
                }
                swap(p[j + 1], temp);
            }
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
    int *p;
    int size;
    cout<<"Enter the size of array ";
    cin>>size;
    p=new int[size];
    cout<<"Enter the array :"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>p[i];
    }

    binaryInsertionSort *bi=new binaryInsertionSort();

    bi->print(p,size);
    bi->BinaryInsertionSort(p,size);
    bi->print(p,size);
}