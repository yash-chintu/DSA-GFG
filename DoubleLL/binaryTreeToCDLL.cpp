void inorder(Node *root, vector<Node *> &inor)
{
    if (!root)
        return;
    inorder(root->left, inor);
    inor.push_back(root);
    inorder(root->right, inor);
}
Node *bTreeToCList(Node *root)
{
    vector<Node *> ans;
    inorder(root, ans);
    ans.front()->left = ans.back();
    for (int i = 0; i < ans.size(); i++)
    {
        if (i == ans.size() - 1)
        {
            ans[i]->right = ans.front();
        }
        else
        {
            ans[i]->right = ans[i + 1];
            ans[i + 1]->left = ans[i];
        }
    }
    return ans.front();
}