#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> num;
    cout << "size = :" << num.size() << endl;

    num.push_back(30);
    num.push_back(0);
    num.push_back(432);

    cout << "size = :" << num.size() << endl;

    for (int i : num)
    {
        cout << i << endl;
    }

    return 0;
}