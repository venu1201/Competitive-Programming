void inorder(Node* root, int* vec[],int i)
{
    if (root != NULL) {
        inorder(root->left, vec,i);
        vec[i++]=(root->key);
        inorder(root->right, vec,i);
    }
}
int checkForTriplet(Node* root, int sum)
{
   
    int vec[100];
 
   
    inorder(root, vec,0);
 
    int l, r;
 
    
    for (int i = 0; i < vec.size() - 2; i++) {
 
        
        r = vec.size() - 1;
        while (l < r) {
            if (vec[i] + vec[l] + vec[r] == sum) {
 
                return 1;
            }
            else if (vec[i] + vec[l] + vec[r] < sum)
                l++;
            else 
                r--;
        }
    }
 
    
    return 0;
}