#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int _data)
    {
        data = _data;
        left = NULL;
        right = NULL;
    }
};

Node *insert(Node *node, int a)
{
    if (node == NULL)
        node = new Node(a);
    else if (a < node->data)
        node->left = insert(node->left, a);
    else
        node->right = insert(node->right, a);
    return node;
}

void postOrder(Node *node)
{
    if (node != NULL)
    {
        postOrder(node->left);
        postOrder(node->right);
        cout << node->data << '\n';
    }
}

int main()
{
    Node *root = NULL;
    while (true)
    {
        int n;
        cin >> n;

        if (cin.eof() == true)
            break;

        root = insert(root, n);
    }

    postOrder(root);
}