#include <iostream>
using namespace std;

class Tree
{
public:
    char left;
    char right;
};

Tree tree[26];

void preOrder(char root)
{
    if (root != '.')
    {
        cout << root;
        preOrder(tree[root - 'A'].left);
        preOrder(tree[root - 'A'].right);
    }
}

void inOrder(char root)
{
    if (root != '.')
    {
        inOrder(tree[root - 'A'].left);
        cout << root;
        inOrder(tree[root - 'A'].right);
    }
}

void postOrder(char root)
{
    if (root != '.')
    {
        postOrder(tree[root - 'A'].left);
        postOrder(tree[root - 'A'].right);
        cout << root;
    }
}

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        char a, b, c;
        cin >> a >> b >> c;

        tree[a - 'A'].left = b;
        tree[a - 'A'].right = c;
    }

    preOrder('A');
    cout << endl;
    inOrder('A');
    cout << endl;
    postOrder('A');
}