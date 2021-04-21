template <typename T>
    class BinaryTreeNode
    {
        public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data)
        {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };


void printNodesWithoutSibling(BinaryTreeNode<int> *root) {
    // Write your code here
    if(root==NULL){
        return;
    }
    if(root->left){
        printNodesWithoutSibling(root->left);
        if(!root->right){
            cout<<root->left->data<<" ";
        }
    }
    if(root->right){
        if(!root->left){
            cout<<root->right->data<<" ";
        }
        printNodesWithoutSibling(root->right);
    }
    