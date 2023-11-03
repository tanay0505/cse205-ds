class KthLargest {
    priority_queue<int,vector<int>, greater<int>> q;
    int kNums;
public:

    KthLargest(int k, vector<int>& nums) {
        kNums=k;
        for(int element:nums)
            q.push(element);

        while(q.size()>k)
            q.pop();
    
    }
    
    int add(int val) {
        q.push(val);
        if(q.size()>kNums) // or while(q.size()>kNums)
            q.pop();
        
        return q.top();
    }
};