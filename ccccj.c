#include <stdio.h>
#include <stdlib.h>
#define N 17
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node *root = NULL;
struct node *getNode(int value)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = value;
    newnode->left = NULL;
    newnode->right = NULL;
    return newnode;
}

// adds the node into the BST
void addNode(int value)
{
    // if the root is null then makes the value as root
    if (root == NULL)
    {
        root = getNode(value);
    }
    // else inserts the value at correct position
    else
    {
        struct node *temp = root;
        while (1)
        {
            if (temp->data > value)
            {
                if (temp->left == NULL)
                {
                    temp->left = getNode(value);
                    break;
                }
                else
                {
                    temp = temp->left;
                }
            }
            else
            {
                if (temp->right == NULL)
                {
                    temp->right = getNode(value);
                    break;
                }
                else
                {
                    temp = temp->right;
                }
            }
        }
    }
}

// returns the sum of the level values
int average(struct node *head, int currLevel, int level, int *count)
{
    // if the head is null then returns 0
    if (head == NULL)
    {
        return 0;
    }
    else
    {
        // if the currLevel is level then prints the value and returns the value
        if (currLevel == level)
        {
            printf("%d ", head->data);
            *count = *count + 1;
            return head->data;
        }
        return average(head->left, currLevel + 1, level, count) + average(head->right, currLevel + 1, level, count);
    }
}

// checks the is tree liner or not
int isLinear(struct node *head)
{
    // if the head is null then returns 1
    if (head == NULL)
    {
        return 1;
    }
    else
    {
        // if the node has more than one child then returns 0
        if (head->left != NULL && head->right != NULL)
        {
            return 0;
        }
        // checks the remaining tree nodes
        return isLinear(head->left) == 1 && isLinear(head->right) == 1;
    }
}

int main()
{
    // test code
    int level, count = 0, currLevel = 0, sum = 0;
    int data[N] = {34, 25, 58, 19, 73, 33, 15, 26, 55, 9, 76, 74, 20, 78, 48, 89, 77};
    for (int i = 0; i < N; i++)
    {
        addNode(data[i]);
    }
    printf("Enter a tree level (minimum 0): ");
    scanf("%d", &level);
    printf("\nData items in that level are = ");
    sum = average(root, currLevel, level, &count);
    printf("\nAverage at that level is = %d/%d = %.2f\n", sum, level, (sum * 1.0) / count);
    printf("Result of linear tree testing is = %s", (isLinear(root) == 1 ? "True" : "False"));

    return 0;
}