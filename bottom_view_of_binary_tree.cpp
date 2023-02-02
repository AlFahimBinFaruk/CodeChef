class Solution {
  public:
    vector <int> bottomView(Node *root) {
        vector<int> res;
        if(root == NULL){
            return res;
        }
        
        map<Node *,int> mh; // tree , index
        map<int,int> m; // index,data
        
        // root node index
        int in = 0;
        
        // queue to store traversed tree value temply.
        queue<Node *> mq;
        
        mh[root] = in;
        mq.push(root);
        
        while(!mq.empty()){
            Node *temp = mq.front();
            mq.pop(); // delete first queue item.
            
            in = mh[temp];
            m[in] = temp->data;
            
            // see for left and right childs
            if(temp->left){
                mh[temp->left] = in - 1;
                mq.push(temp->left);
            }
            
            if(temp->right){
                mh[temp->right] = in + 1;
                mq.push(temp->right);
            }
        }
        
        for(map<int,int>::iterator i = m.begin(); i != m.end(); i++){
            res.push_back(i->second);
        }
        
        return res;
    }
};
