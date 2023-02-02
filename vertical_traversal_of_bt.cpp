// https://practice.geeksforgeeks.org/problems/print-a-binary-tree-in-vertical-order
class Solution
{
    unordered_map<int,vector<int>> myMap; // level,nodes;
    int map_min;  // min level
    int map_max; // max level
    
    
    void bfs(Node *root){
        queue< pair<int, Node *> > mq; // level,node
        mq.push({0,root});
        
        while(!mq.empty()){
            auto temp = mq.front();
            mq.pop();
            
            map_min = min(map_min,temp.first);
            map_max = max(map_max,temp.first);
            myMap[temp.first].push_back(temp.second->data);
            
            if(temp.second->left != NULL){
                mq.push({temp.first - 1,temp.second->left});
            }
            if(temp.second->right != NULL){
                mq.push({temp.first + 1,temp.second->right});
            }
        }
    }
    public:
    //Function to find the vertical order traversal of Binary Tree.
    vector<int> verticalOrder(Node *root)
    {   
        // reset everything at first.
        myMap.clear();
        vector<int> result;
        map_min = INT_MAX;
        map_max = INT_MIN;
        
        bfs(root);
        for(int i = map_min; i<= map_max; i++){
            for(int numNode: myMap[i]){
                result.push_back(numNode);
            }
        }
        
        return result;
    }
};
