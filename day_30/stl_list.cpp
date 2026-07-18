#include <iostream>
#include <list>
#include <algorithm>

using namespace std;

int main(){
    list <int> l;

    l.push_back(10);
    l.push_back(20);
    l.push_back(30);
    l.push_back(40);

    cout << "Original List: ";

    for (auto x : l)
        cout << x << " ";

    cout << "\nAccessing Elements\n";
    cout << "At Front: " << l.front() << endl;
    cout << "At Back: " << l.back() << endl;
    cout << "Size: " << l.size() << endl;

    l.pop_front();
    l.pop_back();

    cout << "\nAfter Popping: ";

    for (auto x : l)
        cout << x << " ";

    l.insert(next(l.begin()), 100);

    cout << "\nAfter Insertion: ";

    for (auto x : l)
        cout << x << " ";

    l.remove(100);

    cout << "\nAfter Removing: ";

    for (auto x : l)
        cout << x << " ";

    l.push_back(50);
    l.push_back(25);
    l.push_back(15);

    l.sort();

    cout << "\nAfter Sorting: ";
    for (auto x : l)
        cout << x << " ";

    l.reverse();

    cout << "\nAfter Reversing: ";
    for (auto x : l)
        cout << x << " ";

    cout << "\n\nUsing Forward Iterator: ";
    for (auto it = l.begin(); it != l.end(); it++)
        cout << *it << " ";

    cout << "\nUsing Reverse Iterator: ";
    for (auto it = l.rbegin(); it != l.rend(); it++)
        cout << *it << " ";

    cout << "\nIs List Empty? " << (l.empty() ? "Yes" : "No") << endl;

    l.clear();
    
    cout << "After Clearing, Size: " << l.size() << endl;

    return 0;
}