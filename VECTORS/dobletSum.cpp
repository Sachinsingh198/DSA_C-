// Find the doublet in thd Array whose sum is equal to the given value of x
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int x = 10;
    int count = 0;
    vector<int> v(n);
    for (int i = 0; i < v.size(); i++)
    {

        cin >> v[i];
    }
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = i + 1; j < v.size(); j++)
        {
            if ((v[i] + v[j]) == x)
            {
                cout << v[i] << " + " << v[j] << " = " << x << endl;
                ;
                cout << i << " and " << j;
                count++;
                cout << endl;
                break;
            }
        }
    }
    cout << "The number of pairs : " << count << endl;

    return 0;
}