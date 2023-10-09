int firstOcc(vector<int> &nums, int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;

    while (start <= end)
    {
        if (key == nums[mid])
        {
            ans = mid;
            end = mid - 1;
        }
        else if (key > nums[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int lastOcc(vector<int> &nums, int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;

    while (start <= end)
    {
        if (key == nums[mid])
        {
            ans = mid;
            start = mid + 1;
        }
        else if (key > nums[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>arr;
        int size=nums.size();
        arr.push_back(firstOcc(nums, size, target));
        arr.push_back(lastOcc(nums, size, target));
        return arr;
        
    }
};