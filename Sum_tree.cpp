// https://practice.geeksforgeeks.org/problems/sum-tree
class Solution
{
    public:
    int sumUTIL(Node* root){
        if(root == NULL){
            return 0;
        }
        return (root->data + sumUTIL(root->left) + sumUTIL(root->right));
    }
    bool isSumTree(Node* root)
    {
         if(root == NULL || (root->left == NULL && root->right == NULL)){
             return 1;
         }
         
         int ls = sumUTIL(root->left);
         int rs = sumUTIL(root->right);
         
         if((root->data == (ls+rs))
         && isSumTree(root->left)
         && isSumTree(root->right)){
             return 1;
         }
         
         return 0;
    }
};
