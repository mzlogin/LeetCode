#include "../catch.h"
#include "../mylist.h"
#include "solution.h"

TEST_CASE("Remove Dumplicates From Sorted List", "removeDumplicatesFrom Sorted List") {
    Solution sln;

    const int len1 = 5;
    int nums1[len1] = {1,1,2,3,3};
    ListNode* l1 = createList(nums1, len1);
    ListNode* r1 = sln.deleteDuplicates(l1);

    const int resLen1 = 3;
    int resNum1[resLen1] = {1,2,3};
    CHECK(arrayEqualsList(resNum1, resLen1, r1));
}
