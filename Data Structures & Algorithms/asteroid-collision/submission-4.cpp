class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {

        stack<int> my_Stack;

        for (int num : asteroids) {

            if (num > 0) {
                my_Stack.push(num);
                continue;
            }

            while (!my_Stack.empty() && my_Stack.top() > 0) {

                int number = my_Stack.top();

                if (number == abs(num)) {
                    my_Stack.pop();
                    num = 0;       // both destroyed
                    break;
                }
                else if (number < abs(num)) {
                    my_Stack.pop();
                    // continue checking
                }
                else {
                    num = 0;       // negative asteroid destroyed
                    break;
                }
            }

            if (num != 0) {
                my_Stack.push(num);
            }
        }

        vector<int> ans;

        while (!my_Stack.empty()) {
            ans.push_back(my_Stack.top());
            my_Stack.pop();
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
};