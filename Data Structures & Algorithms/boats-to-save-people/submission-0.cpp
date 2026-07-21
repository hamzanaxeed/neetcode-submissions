class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {

        int result_Count=0;

        sort(people.begin(),people.end());

        int left_Pointer=0;
        int right_Pointer=people.size()-1;

        while(left_Pointer<=right_Pointer){

            if(people[right_Pointer]==limit){
                result_Count++;
                right_Pointer--;
                continue;
            }

            if(people[left_Pointer]==limit){
                result_Count++;
                left_Pointer++;
                continue;
            }

            if(people[right_Pointer]+people[left_Pointer]<=limit){
                result_Count++;
                left_Pointer++;
                right_Pointer--;
                continue;
            }

            if(people[right_Pointer]<limit){
                result_Count++;
                right_Pointer--;
                continue;
            }


        }
        return result_Count;

    }
};