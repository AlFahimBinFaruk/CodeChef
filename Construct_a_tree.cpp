// https://practice.geeksforgeeks.org/problems/construct-tree-1/
// perorder traversal is used to find parent.
// inorder traversal is used to find left,right child of that parent...
/* 
we know that the left most item in preorder is the root node.so we will find it in the inorder array.when we find it the left items of
that array will be left child and right items will be right child..
we will repeat the same procejure untill the tree is empty then return its root.
*/
class Solution{
    public:
	  int preIndex = 0;
    int searchIn(int arr[],int start,int end,int value){
        for(int i=start; i<=end; i++){
            if(arr[i] == value){
                return i;
            }
        }
	  }


    Node* buildTreeUtil(int in[],int pre[],int inStart,int inEnd){
      if(inStart > inEnd){
        return NULL;
      }

      Node* tNode = new Node(pre[preIndex]);
      preIndex++;

      // if tree has no childs
      if(inStart == inEnd){
        return tNode;
      }

      int inIndex = searchIn(in,inStart,inEnd,tNode->data);

      // build left tree
      tNode->left = buildTreeUtil(in,pre,inStart,inIndex - 1);
      // build right tree
      tNode->right = buildTreeUtil(in,pre,inIndex + 1,inEnd);

      return tNode;
    }
    Node* buildTree(int in[],int pre[], int n){
        return buildTreeUtil(in,pre,0,n - 1);
    }
};
