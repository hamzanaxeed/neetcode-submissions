class FreqStack {
    unordered_map<int, int> freq;
    unordered_map<int, stack<int>> group;
    int maxFreq = 0;

public:
    FreqStack() {
        
    }
    
    void push(int val) {
        freq[val]++;
        
        int f = freq[val];
        
        // Put val into the stack corresponding to its new frequency
        group[f].push(val);
        
        // Update maximum frequency
        maxFreq = max(maxFreq, f);
    }
    
    int pop() {
        // Get the most recently added element
        // among elements with maximum frequency
        int val = group[maxFreq].top();
        group[maxFreq].pop();
        
        // Decrease its frequency
        freq[val]--;
        
        // If no elements remain at this frequency,
        // decrease maxFreq
        if (group[maxFreq].empty()) {
            maxFreq--;
        }
        
        return val;
    }
};