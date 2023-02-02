// https://practice.geeksforgeeks.org/problems/level-order-traversal-in-spiral-form/
vector<int> findSpiral(Node *root)
{   
    vector<int> result;
    if(root == NULL){
        return result;
    }
    
    queue<Node *> mq;
    mq.push(root);
    
    bool LTR = false;
    while(!mq.empty()){
        int n = mq.size();
        
        for(int i=0; i<n; i++){
            Node *temp = mq.front();
            mq.pop();
            
            if(LTR){
                result.push_back(temp->data);
            }else{
                result.insert(result.end() - i,temp->data);
            }
            
            if(temp->left != NULL){
                mq.push(temp->left);
            }
            if(temp->right != NULL){
                mq.push(temp->right);
            }
        }
        LTR = !LTR;
    }
    
    return result;
}
