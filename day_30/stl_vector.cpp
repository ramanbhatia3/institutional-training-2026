#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    vector <int> v;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);

    cout << "Original Vector: ";

    for (auto x : v)
        cout << x << " ";

    cout << "\nAccessing Elements\n";
    cout << "At Front: " << v.front() << endl;
    cout << "At Back: " << v.back() << endl;
    cout << "Size: " << v.size() << endl;
    cout << "Capacity: " << v.capacity() << endl;

    cout << "\nUsing Iterator\n";
    for (auto it = v.begin(); it != v.end(); it++)
        cout << *it << " ";

    v.insert(v.begin() + 2, 100);

    cout << "\nAfter Insertion: ";
    for (auto x : v)
        cout << x << " ";


    v.erase(v.begin()+3);

    cout << "\nAfter Erasing: ";
    for (auto x : v)
        cout << x << " ";

    v.pop_back();

    cout << "\nAfter Popping: ";

    for (auto x : v)
        cout << x << " ";

    v.insert(v.begin() + 1, 100);

    cout << "\nAfter Insertion: ";

    for (auto x : v)
        cout << x << " ";

    sort(v.begin(), v.end());

    cout << "\nAfter Sorting: ";
    for (auto x : v)
        cout << x << " ";

    reverse(v.begin(), v.end());

    cout << "\nAfter Reversing: ";
    for (auto x : v)
        cout << x << " ";

    auto it = find(v.begin(), v.end(), 20);

    if (it != v.end())
        cout << "\n20 Found";
    else
        cout << "\n20 Not Found";

    cout << "\nCount of 20: " << count(v.begin(), v.end(), 20);

    cout << "\n\nUsing Reverse Iterator\n";
    for (auto it = v.rbegin(); it != v.rend(); it++)
        cout << *it << " ";

    v.clear();

    cout << "\nAfter Clearing: ";
    cout << "\nSize: " << v.size() << endl;

    return 0;
}