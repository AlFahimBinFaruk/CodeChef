// https://practice.geeksforgeeks.org/problems/print-all-nodes-that-dont-have-sibling/
vector<int> result;

void dfs(Node* node){
    if(node == NULL){
        return;
    }
    if(node->left != NULL){
        if(node->right == NULL){
            result.push_back(node->left->data);
        }
    }
    
    if(node->right != NULL){
        if(node->left == NULL){
            result.push_back(node->right->data);
        }
    }
    
    if(node->left != NULL){
        dfs(node->left);
    }
    if(node->right != NULL){
        dfs(node->right);
    }
}

vector<int> noSibling(Node* node){
    result.clear();
    dfs(node);
    if(result.empty()){
        result.push_back(-1);
    }
    sort(result.begin(),result.end());
    return result;
}
