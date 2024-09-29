#include <iostream>
using namespace std;

int calculatecost(int people) {
    int subscriptions = people / 6;
    if (people % 6 != 0) {
        subscriptions += 1;  
    }

    int total_cost = 0;

    if (subscriptions <= 2) {
        total_cost = subscriptions * 100;
    } 
 
    else {
        total_cost = 2 * 100; 
        total_cost += (subscriptions - 2) * 135;  
    }

    return total_cost;
}

int main() {
    int test_cases;
    cin >> test_cases;

    while (test_cases--) {
        int people, expected_cost;
        cin >> people >> expected_cost;
        int total_cost = calculatecost(people);
        cout << total_cost;
    }

    return 0;
}
