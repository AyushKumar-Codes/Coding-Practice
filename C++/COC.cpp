#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int max_damage_per_second(vector<int>& damage, vector<int>& size, int barrack_size) {
    int n = damage.size();
    vector<int> dp(barrack_size + 1, 0);

    for (int i = 0; i < n; ++i) {
        for (int j = barrack_size; j >= size[i]; --j) {
            dp[j] = max(dp[j], dp[j - size[i]] + damage[i]);
        }
    }

    return dp[barrack_size];
}

int main() {
    // Input parsing
    vector<int> damage, size, category;
    int barrack_size, temp;

    // Read damage values
    while (cin >> temp) {
        damage.push_back(temp);
        if (cin.get() == '\n') break;
    }

    // Read size values
    while (cin >> temp) {
        size.push_back(temp);
        if (cin.get() == '\n') break;
    }

    // Read category values
    while (cin >> temp) {
        category.push_back(temp);
        if (cin.get() == '\n') break;
    }

    cin >> barrack_size;

    // Filter troops based on category
    vector<int> unique_categories;
    vector<int> filtered_damage, filtered_size;
    for (int i = 0; i < category.size(); ++i) {
        if (find(unique_categories.begin(), unique_categories.end(), category[i]) == unique_categories.end()) {
            unique_categories.push_back(category[i]);
            filtered_damage.push_back(damage[i]);
            filtered_size.push_back(size[i]);
        }
    }

    int result = max_damage_per_second(filtered_damage, filtered_size, barrack_size);
    cout << result << endl;

    return 0;
}
