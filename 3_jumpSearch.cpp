#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n, arr[100];
    cout << "Enter the no of elements in array\n";
    cin >> n;
    for (int i = 1; i <= n ; i++)
    {
        cin >> arr[i];
    }
    int m = sqrt(n);
    int num;
    cout << "Enter the no you want to check\n";
    cin >> num;
    int j = 1, flag = 0;
    while (j <= n)
    {
        if (num > arr[j])
        {
            j=j+(m);
        }
        else if (num < arr[j ])
        {
            j=j-(m);
            for (int i = j ; i < (j + (m)) ; i++)
            {
                if (num == arr[i])
                {
                    cout << "Index is " << i<< endl;
                    flag = 1;
                }
                if (flag == 1)
                {
                    return 0;
                }
            }
        }
        else if(num==arr[j])
        {
            cout<<"index is "<<j;
            return 0;
        }
        else
        {
            cout << "number not found\n";
            return 0;
        }
    }
}