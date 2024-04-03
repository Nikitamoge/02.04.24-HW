#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


//Task 1
bool Shorter(const string& x, const string& y) {
    return x.length() < y.length();
}


//Task 2
struct Compare {
    bool operator()(const string& a, const string& b) const {
        return a.length() < b.length();
    }
};


int main() {
    //Task 1
    /*vector<string> strings = { "General", "Delightful", "Gorgeous", "Beautiful", "Predisposition"};

    sort(strings.begin(), strings.end(), Shorter);

    for (size_t i = 0; i < strings.size(); ++i) {
        cout << strings[i];
        if (i < strings.size() - 1) {
            cout << ", ";
        }
    }*/


    //Task 2
    vector<string> strings = { "General", "Delightful", "Gorgeous", "Beautiful", "Predisposition" };

    sort(strings.begin(), strings.end(), Compare());

    for (size_t i = 0; i < strings.size(); ++i) {
        cout << strings[i];
        if (i < strings.size() - 1) {
            cout << ", ";
        }
    }
}