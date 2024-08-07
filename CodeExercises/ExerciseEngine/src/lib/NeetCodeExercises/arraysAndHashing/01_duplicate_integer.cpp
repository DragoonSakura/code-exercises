#include <stdio.h>
#include <unordered_set>
#include <vector>

/**
*
* @brief Checks if a vector of integers hes duplicate entries
*
* @params nums => The int vector to search
*
* @returns true => has duplicate, false => no duplicates
*
*/
bool hasDuplicate(std::vector<int>& nums) {

    bool has_repeat = false;

    // SELF NOTE START
    // Original solution involved unordered maps
    // SELF NOTE END
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
