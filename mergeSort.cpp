#include <bits/stdc++.h>

using namespace std;

class mergeSort
{
private:
    /* data */
public:
    void merging(int *p, int low, int mid, int high)
    {
        int i = low;
        int j = mid + 1;
        int *k = new int[high + 1];
        int c = low;
        while (i <= mid && j <= high)
        {
            if (p[i] <= p[j])
            {
                k[c++] = p[i++];
            }
            else
            {
                k[c++] = p[j++];
            }
        }

        while (i <= mid)
        {
            k[c++] = p[i++];
        }
        while (j <= high)
        {
            k[c++] = p[j++];
        }
        for (int b = low; b <= high; b++)
        {
            p[b] = k[b];
        }
    }

    void print(int *p, int n)
    {
        for (int i = 0; i < n; i++)
        {
            cout << " " << p[i];
        }
        cout << endl;
    }
    void MergeSort(int *p, int low, int high)
    {
        if (low < high)
        {
            int mid = (low + high) / 2;
            MergeSort(p, mid + 1, high);
            MergeSort(p, low, mid);
            merging(p, low, mid, high);
        }
        else
        return;
    }
};

int main()
{
    int *p;
    int size;
    cout << "Enter the no of element in array: ";
    cin >> size;
    cout << "Enter the elements";
    p = new int[size];
    for (int i = 0; i < size; i++)
    {
        cin >> p[i];
    }
    mergeSort *m = new mergeSort();
    m->print(p, size);
    m->MergeSort(p,0,size-1);
    m->print(p, size);
}
