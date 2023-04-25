#include <iostream>
#include <array>
#include <algorithm>
using namespace std;

int main() {


    array<int, 10> nums;

    cout << "Please enter 10 integers to store into an array." << endl;
    for (int i = 0; i < 10; i++) {
        cout << "Enter Number " << i + 1 << ": ";
        cin >> nums[i];
    }

    //this is sorting the numbers in numerical order and then reversing them
    sort(nums.begin(), nums.end());
    reverse(nums.begin(), nums.end());

    //the front method is used for the first number in the array
    //the back method is used for the last number of the array
    cout << "The biggest number is in your array is: " << nums.front() 
        << "\nThe smallest number in your array is: " << nums.back() << endl;
 
    return 0;
}