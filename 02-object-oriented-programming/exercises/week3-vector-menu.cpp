#include <iostream>
#include <vector>
#include <iomanip>
#include <climits>
#include <algorithm>

using namespace std;

int main() {
    char selection;
    vector<int> nums;

    do {
        cout << "----------------------------------------" << endl
             << "P - Print numbers." << endl
             << "A - Add a number." << endl
             << "M - Display mean of the numbers." << endl
             << "S - Display the smallest number." << endl
             << "L - Display the largest number." << endl
             << "C - Clear the list." << endl
             << "Q - Quit." << endl
             << "\nEnter your choice: ";
        cin >> selection;

        switch (selection) {
            case 'P':
            case 'p':
                cout << (nums.empty() ? "[ ] - the list is empty" : "\n[ " + [&]() {
                    for (int num : nums)
                        cout << num << " ";
                    return "]\n";
                }());
                break;
            case 'A':
            case 'a':
                int numIntegers;
                cout << "\nHow many integers do you want to add? ";
                cin >> numIntegers;
                for (int i = 0; i < numIntegers; i++) {
                    int num;
                    cin >> num;
                    nums.push_back(num);
                }
                cout << numIntegers << " added" << endl;
                break;
            case 'M':
            case 'm':
                double averageOfnums = (nums.empty() ? 0.0 : accumulate(nums.begin(), nums.end(), 0.0) / nums.size());
                cout << fixed << setprecision(5)
                     << (nums.empty() ? "\nUnable to calculate the mean - no data" : "\nThe mean/average of the elements is: " + to_string(averageOfnums)) << endl;
                break;
            case 'S':
            case 's':
                cout << (nums.empty() ? "\nUnable to determine the smallest number - list is empty" :
                                      "\nThe smallest value is: " + to_string(*min_element(nums.begin(), nums.end()))) << endl;
                break;
            case 'L':
            case 'l':
                cout << (nums.empty() ? "\nUnable to determine the largest number - list is empty!" :
                                      "\nThe largest value is: " + to_string(*max_element(nums.begin(), nums.end()))) << endl;
                break;
            case 'C':
            case 'c':
                nums.clear();
                cout << (nums.empty() ? "\nList is empty!" : "\nThe list has been cleared...") << endl;
                break;
            case 'Q':
            case 'q':
                cout << "\nGoodbye" << endl;
                break;
            default:
                cout << "\nUnknown selection, please try again" << endl;
        }
    } while (tolower(selection) != 'q');

    return 0;
}
