Node* head=NULL,*tail=NULL;

Node* ConvertToDLL(Node *root){
    if(!root)
        return NULL;
    if(!root->left&&!root->right){
        Node* new_node = new Node(root->data);
        // cout<<root->data<<endl;
        if(!head){
            head=new_node;
            tail=new_node;
        }
        else{
            new_node->left=tail;
            tail->right=new_node;
            tail=tail->right;
        }
        return NULL;
    }
    if(!ConvertToDLL(root->left)){
        root->left=NULL;
    }
    if(!ConvertToDLL(root->right)){
        root->right=NULL;
    }
    
    return head;
    
}

Node * convertToDLL(Node *root){
    head=NULL,tail=NULL;
    return ConvertToDLL(root);
}
