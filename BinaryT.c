#include <stdio.h>

#include <stdlib.h>

struct node {
int data;
struct node* left;
struct node* right;
};

struct node* newNode(int data)
{
struct node* node = (struct node*)malloc(sizeof(struct node));
node->data = data;
node->left = NULL;
node->right = NULL;

return (node);
}

int searchTreeRecursive (struct node *node, int target)
{
if (node == NULL)
{
return 0; // The target was not found
}

if (node->data == target)
{
return 1; // The target was found
}
else if (node->data > target)

{
return searchTreeRecursive(node->left, target); // Search the left subtree
}
else
{
return searchTreeRecursive(node->right, target);// Search the right subtree
}
}

int main ()
{
// Create a binary tree
int target;
struct node* root = newNode(4);
root->left = newNode(2);
root->right = newNode(6);
root->left->left = newNode(1);
root->left->right = newNode(3);
root->right->left = newNode(5);
root->right->right = newNode(7);

// Search for a target value in the binary tree
printf("Enter the element to be searched:");
scanf("%d",&target);
int result = searchTreeRecursive(root,target);
if (result == 1)
{
printf ("The target value %d is found in the binary tree\n", target);
}
else

{
printf ("The target value %d is not found in the binary tree\n",
target);
}

// Free the memory allocated for the binary tree
free (root->left->left);
free (root->left->right);
free (root->right->left);
free (root->right->right);
free (root->left);
free (root->right);
free (root);
return 0;
}