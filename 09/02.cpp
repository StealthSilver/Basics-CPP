#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> num(5, 0);
    cout << num[0] << endl;
    cout << num[1] << endl;
    cout << num[2] << endl;
    cout << num[3] << endl;
    cout << num[4] << endl;

    for (int i : num)
    {
        cout << i << endl;
    }

    return 0;
}
