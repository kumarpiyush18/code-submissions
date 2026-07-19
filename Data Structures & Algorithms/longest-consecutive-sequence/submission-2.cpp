class UnionFind {
    vector<int> parent;
    vector<int> size;
    int maxSize;

    public:
    UnionFind(int n){
        parent.resize(n);
        size.resize(n,1);
        maxSize = 1;


        for(int i = 0 ; i < n; i++){
            parent[i]=i;
        }
    }

    int find(int i){
        if(parent[i]==i){
            return i;
        }

        return parent[i]= find(parent[i]);
    }

    void unite(int i,int j){
        int irep = find(i);
        int jrep = find(j);

        if(irep==jrep) return;

        if(size[irep] < size[jrep]){
            parent[irep] = jrep;
            size[jrep]+=size[irep];
            maxSize = max(maxSize,size[jrep]);
        }
        else{
            parent[jrep] = irep;
            size[irep] += size[jrep];
            maxSize = max(maxSize, size[irep]);
        }
    }

    int getMaxSize(){
        return maxSize;
    }
};


class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;

        int  n = nums.size();
        UnionFind uf(n);

        unordered_map<int,int> num_to_index;

        for(int i = 0 ; i<n;i++){
            int num = nums[i];

            if(num_to_index.find(num)!=num_to_index.end()){
                continue;
            }

            num_to_index[num] = i;

            if(num_to_index.find(num-1)!=num_to_index.end()){
                uf.unite(i,num_to_index[num-1]);
            }

            if(num_to_index.find(num+1)!=num_to_index.end()){
                uf.unite(i,num_to_index[num+1]);
            }
        }


        return uf.getMaxSize();
    }
};
