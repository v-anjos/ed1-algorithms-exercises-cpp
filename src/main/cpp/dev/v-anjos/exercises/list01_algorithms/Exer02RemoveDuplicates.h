#ifndef ED1_ALGORITHMS_EXERCISES_CPP_EXER02REMOVEDUPLICATES_H
#define ED1_ALGORITHMS_EXER02REMOVEDUPLICATES_H

#include <vector>

int removeDuplicates(std::vector<int>& nums) {

    if (nums.empty()) {
        return 0;
    }

    int i = 0;

    for (int j = 1; j < nums.size(); j++) {

        if (nums[j] != nums[i]) {
            i++;
            nums[i] = nums[j];
        }
    }

    return i + 1;
}

#endif // ED1_ALGORITHMS_EXERCISES_CPP_EXER02REMOVEDUPLICATES_H
