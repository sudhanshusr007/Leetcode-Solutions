class Solution
{
public:
    int search(vector<int> &nums, int key)
    {

        int start, mid, end;
        end = nums.size() - 1;
        start = 0;
        mid = start + (end - start) / 2;
        // dividing our data structure in 3 parts, left side, right side and mid
        while (start <= end)
        {
            if (nums[mid] == key) // Checking if mid element equals with key or not
            {
                return mid;
            }
            else if (key < nums[mid]) // As the key is smaller than our mid element, we want the key to be searched in left side of DS
            {
                end = mid - 1;
            }
            else if (key > nums[mid]) // As the key is larger than our mid element, we want the key to be searched in right side of DS
            {
                start = mid + 1;
            }
            mid = start + (end - start) / 2;
        }
        return -1;
    }
};