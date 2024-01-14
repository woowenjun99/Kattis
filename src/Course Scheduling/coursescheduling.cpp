#include <algorithm>
#include <iostream>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>
using namespace std;
vector<string> courses;
unordered_map<string, unordered_set<string>> mappers;
unordered_set<string> exists;

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int x; cin >> x;
    while (x--) {
        string first_name, last_name, course; 
        cin >> first_name >> last_name >> course;
        string full_name = first_name + last_name;
        mappers[course].insert(full_name);
        if (exists.find(course) == exists.end()) { 
            courses.push_back(course);
            exists.insert(course);
        }
    }

    sort(courses.begin(), courses.end());
    for (int i = 0; i < courses.size(); ++i) {
        cout << courses[i] << " " << mappers[courses[i]].size() << "\n";
    }
    return 0;
}