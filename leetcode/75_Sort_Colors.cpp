class Solution
{
public:
    void sortColors(vector<int> &nums)
    {

        int start = 0;
        int index = 0;
        int end = nums.size() - 1;

        while (index <= end)
        {

            if (nums[index] == 0)
            {
                swap(nums[index], nums[start]);
                start++;
            }
            else if (nums[index] == 2)
            {
                swap(nums[index], nums[end]);
                end--;
                index--;
            }
            index++;
        }
    }
};