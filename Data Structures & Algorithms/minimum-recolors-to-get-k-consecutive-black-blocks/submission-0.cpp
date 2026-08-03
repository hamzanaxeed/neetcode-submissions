class Solution {
public:
    int minimumRecolors(string blocks, int k) {

        int minOperations = INT_MAX;

        int left = 0;
        int right = 0;

        int blackCount = 0;

        while (right < blocks.size()) {

            if (blocks[right] == 'B')
                blackCount++;

            right++;

            while (right - left > k) {
                if (blocks[left] == 'B')
                    blackCount--;

                left++;
            }

            if (right - left == k)
                minOperations = min(minOperations,
                                    k - blackCount);
        }

        return minOperations;
    }
};