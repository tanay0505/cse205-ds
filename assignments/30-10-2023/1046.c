class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> heap(stones.begin(),stones.end());
        while(heap.size()>1){
            int l1 = heap.top();
            heap.pop();
            int l2 = heap.top();
            heap.pop();
            if(l1!=l2){
                heap.push(l1-l2);
            }
        }
        return heap.empty()?0:heap.top();
    }
};