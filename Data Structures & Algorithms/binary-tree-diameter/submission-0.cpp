class Solution {
public:
    pair<int, int> wrapper(TreeNode* node) {

        if (!node)
            return {0, 0};

        pair<int, int> left = wrapper(node->left);
        pair<int, int> right = wrapper(node->right);

        int height = 1 + max(left.first, right.first);

        int diameter = max({
            left.second,
            right.second,
            left.first + right.first
        });

        return {height, diameter};
    }

    int diameterOfBinaryTree(TreeNode* root) {
        return wrapper(root).second;
    }
};