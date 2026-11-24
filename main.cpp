#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    vector<string> students = {
        "Hadeer Mahmoud",
        "Youssef Ali",
        "Ahmed Mostafa",
        "Esraa Ebrahim"
    };


    sort(students.begin(), students.end());

    cout << "Students sorted in ascending order:" << endl;
    for (size_t i = 0; i < students.size(); ++i) {
        cout << (i + 1) << ". " << students[i] << endl;
    }

    return 0;
}
