#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<int> getSecondOrderElements(int n, vector<int> a) {
    // Write your code here.
    // Done without Sorting 'coz , "NO" sorting provide Tc of O(n)
    // Sc: O(1)
    // Tc: O(n)
    int smallest_element = INT_MAX;
    int second_smallest = INT_MAX;
    int largest_element = INT_MIN;
    int second_largest = INT_MIN;

    int i = 0;
    for(i = 0; i < a.size(); i++) {
        if(a[i] < smallest_element) {
            second_smallest = smallest_element;
            smallest_element = a[i];
        }
        else if(a[i] < second_smallest && a[i] != smallest_element) {
            second_smallest = a[i];
        }

        if(a[i] > largest_element) {
            second_largest = largest_element;
            largest_element = a[i];
        }
        else if(a[i] > second_largest && a[i] != largest_element) {
            second_largest = a[i];
        }
    }

    vector<int> v {second_largest, second_smallest};
    return v;
}
