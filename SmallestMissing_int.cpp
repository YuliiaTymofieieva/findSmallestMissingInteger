// SmallestMissing_int.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int findSmallestMissingInteger(vector<int>& arr) {
    unordered_set<int> numSet;

    for (int num : arr) {
        if (num > 0) {
            numSet.insert(num);
        }
    }

    int smallest = 1;

    while (numSet.find(smallest) != numSet.end()) {
        smallest++;
    }

    return smallest;
}

int main() {
    vector<int> numbers;
    int n;
    cout << "Podaj rozmiar tablicy ";
    cin >> n;

    cout << "Wprowadz " << n << " elementow do tablicy: " << endl;
    for (int i = 0; i < n; i++) {
        int element;
        cin >> element;
        numbers.push_back(element);
    }
    int missingNumber = findSmallestMissingInteger(numbers);

    cout << "Najmniejsza brakująca liczba to: " << missingNumber << std::endl;

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
