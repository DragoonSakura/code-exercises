#include <stdio.h>
#include <unordered_set>
#include <vector>

bool hasDuplicate(std::vector<int> nums) {

    bool has_repeat = false;

    // Self Note start
    // Original solution involved unordered maps
    // Self Note end
    std::unordered_set<int> occurred_nums;

    for ( int i = 0; i < nums.size(); i++ ) {
        if ( occurred_nums.find(nums[i]) != occurred_nums.end() ) {
            has_repeat = true;
            break;
        } else {
            occurred_nums.insert(nums[i]);
        }
    }

    return has_repeat;
}

int main() {

    std::vector<int> test_vec1 = { 1, 3, 2, 6, 11, 3, 5, 4};
    std::vector<int> test_vec2 = { 1, 3, 2, 6, 11, 9, 5, 4};

    printf("Test 1: %s\n", hasDuplicate(test_vec1) ? "passed" : "failed");
    printf("Test 2: %s\n", !hasDuplicate(test_vec2) ? "passed" : "failed");

}
