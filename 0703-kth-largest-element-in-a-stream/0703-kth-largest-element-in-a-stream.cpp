class KthLargest {
public:
    int k;
    priority_queue<int,vector<int>,greater<int>>pq;
    KthLargest(int k, vector<int>& nums) {
        int n=nums.size();
        this->k=k;

        for(int i=0; i<n; i++){
            pq.push(nums[i]);

            if(pq.size()>k){
                pq.pop();
            }
        }
    }
    
    int add(int val) {
        pq.push(val);

        if(pq.size()>k){
            pq.pop();
        }

        return pq.top();
    }
};
// min heap
// k=3


// step 1 -> element ko insert karo
// step 2 -> if pq ka size > k to remove top element
// step 3 -> kth largest is my top element



// 8
// 9
// 10