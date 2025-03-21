#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
};

Node* add(Node* head, int data)
{
    Node* node = new Node;
    node->data = data;
    node->next = NULL;

    if (head == NULL)
    {
        head = node;
    }
    else
    {
        Node* temp = head;

        while (temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = node;
    }

    return head;
}

Node* del(Node* head)
{
    Node* temp = head;
    Node* root = NULL;
    Node* curr = NULL;
    bool flag = false;

    while (temp)
    {
        if (temp->next && temp->data + temp->next->data == 0)
        {
            temp = temp->next->next;
            flag = true;
        }
        else
        {
            Node* node = new Node;
            node->data = temp->data;
            node->next = NULL;

            if (root == NULL)
            {
                root = node;
                curr = root;
            }
            else
            {
                curr->next = node;
                curr = curr->next;
            }

            temp = temp->next;
        }
    }

    if (flag)
    {
        return del(root);
    }
    else
    {
        return root;
    }
}

void print(Node* head)
{
    Node* temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;
}

int main()
{
    Node* head = NULL;
    int n, data;

    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cin >> data;
        head = add(head, data);
    }

    head = del(head);
    print(head);

    return 0;
}
