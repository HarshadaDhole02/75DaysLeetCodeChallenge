
class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq;

        // Insert all stones into max heap
        for (int stone : stones) {
            pq.push(stone);
        }

        // Smash stones until one or none remains
        while (pq.size() > 1) {
            int first = pq.top();
            pq.pop();

            int second = pq.top();
            pq.pop();

            if (first != second) {
                pq.push(first - second);
            }
        }

        // Return remaining stone or 0
        return pq.empty() ? 0 : pq.top();
    }
};