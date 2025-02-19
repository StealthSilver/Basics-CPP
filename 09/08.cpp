#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> num;

    num.push_back(30);
    num.push_back(0);
    num.push_back(432);

    cout << num.size() << endl;
    cout << num.capacity() << endl;
    return 0;
}