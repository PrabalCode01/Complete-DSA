#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *left;
    struct node *right;

    node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
            //TC = O(n + m)
            //SC = O(n + m)
    }
};

// // store inorder
// void inorder(node *root, vector<int> &in)
// {
//     if (root == NULL)
//     {
//         return;
//     }

//     inorder(root->left, in);
//     in.push_back(root->data);
//     inorder(root->right, in);
// }

// // merging two sorted array
// vector<int> mergeArrays(vector<int> &a, vector<int> &b)
// {
//     vector<int> ans(a.size() + b.size());

//     int i = 0, j = 0, k = 0;
//     while (i < a.size() && j < b.size())
//     {
//         if (a[i] < b[j])
//         {
//             ans[k++] = a[i++];
//         }
//         else
//         {
//             ans[k++] = b[j++];
//         }
//     }
//     while (i < a.size())
//     {
//         ans[k++] = a[i++];
//     }
//     while (j < b.size())
//     {
//         ans[k++] = b[j++];
//     }

//     return ans;
// }

// // converting inorder to a binary search tree
// node *inorder_to_BST(vector<int> &in, int s, int e)
// {
//     if (s > e)
//     {
//         return NULL;
//     }
//     int mid = (s + e) / 2;
//     node *temp = new node(in[mid]);
//     temp->left = inorder_to_BST(in, s, mid - 1);
//     temp->right = inorder_to_BST(in, mid + 1, e);

//     return temp;
// }

// // function for merging two BST
// node *Merge_bst(node *root1, node *root2)
// {

//     vector<int> bst1, bst2;
//     inorder(root1, bst1);
//     inorder(root2, bst2);

//     vector<int> mergeArray = mergeArrays(bst1, bst2);

//     int s = 0;
//     int e = mergeArray.size() - 1;

//     return inorder_to_BST(mergeArray, s, e);
// }




// optimized solution with help of linked list

void convert_BST_to_sorted_DLL(node *root, node *&head)
{
    if (root == NULL)
    {
        return;
    }

    convert_BST_to_sorted_DLL(root->right, head);
    root->right = head;

    if (head != NULL)
        head->left = root;

    head = root;

    convert_BST_to_sorted_DLL(root->left, head);
}

// merging two sorted linked list

node *mergeLinkedList(node *head1, node *head2)
{
    node *head = NULL;
    node *tail = NULL;

    while (head1 != NULL && head2 != NULL)
    {

        if (head1->data < head2->data)
        {
            if (head == NULL)
            {
                head = head1;
                tail = head1;
                head1 = head1->right;
            }
            else
            {
                tail->right = head1;
                head1->left = tail;
                tail = head1;
                head1 = head1->right;
            }
        }
        else
        {
            if (head == NULL)
            {
                head = head2;
                tail = head2;
                head1 = head2->right;
            }
            else
            {
                tail->right = head2;
                head2->left = tail;
                tail = head2;
                head2 = head2->right;
            }
        }
    }

    while (head1 != NULL)
    {
        tail->right = head1;
        head1->left = tail;
        tail = head1;
        head1 = head1->right;
    }

    while(head2!=NULL){
        tail->right = head2;
        head2->left = tail;
        tail = head2;
        head2 = head2->right; 
    }

    return head;
}

//counting nodes of linked list
int count_nodes(node* head){
    int cnt=0;
    node* temp= head;
    while(temp!=NULL){
        cnt++;
        temp= temp->right;
    }
    return cnt;
}

node* sortedLL_to_bst(node* &head,int n){
    if(n<=0 || head==NULL){
        return NULL;
    }

    node* left= sortedLL_to_bst(head,n/2);
    node* root= head;
    
    root->left= left;
    head= head->right;
    root->right= sortedLL_to_bst(head, n-n/2-1);    
    return root;

}

int main()
{

    node *root1 = new node(8);
    root1->left = new node(5);
    root1->right = new node(9);
    root1->left->left = new node(2);
    root1->left->right = new node(6);

    node *root2 = new node(10);
    root2->left = new node(3);
    root2->right = new node(11);
    root2->left->left = new node(1);
    root2->left->right = new node(4);

    // cout << Merge_bst(root1, root2)->data << endl;
    // cout << Merge_bst(root1, root2)->left->data << endl;
    // cout << Merge_bst(root1, root2)->right->data << endl;
    // cout << Merge_bst(root1, root2)->right->left->data << endl;
    // cout << Merge_bst(root1, root2)->right->left->right->data << endl;
    // cout << Merge_bst(root1, root2)->right->right->data << endl;
    // cout << Merge_bst(root1, root2)->right->right->right->data << endl;
    // cout << Merge_bst(root1, root2)->left->left->data << endl;
    // cout << Merge_bst(root1, root2)->left->right->data << endl;
    // cout << Merge_bst(root1, root2)->left->right->right->data << endl;
    // cout << Merge_bst(root1, root2)->left->right->left->data << endl;

    node* head1=NULL;
    convert_BST_to_sorted_DLL(root1,head1);
    head1->left=NULL;

    node* head2=NULL;
    convert_BST_to_sorted_DLL(root2,head2);
    head2->left=NULL;

    node* head=  mergeLinkedList(head1, head2);

    cout<<sortedLL_to_bst(head,count_nodes(head))->data<<endl;


    return 0;
}