// Check LL is Circular Or NOT
#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
void print(Node *&tail)
{
    Node *temp = tail;
    do
    {
        cout << temp->data << " ";
        temp = temp->next;

    } while (temp != tail);
    cout << endl;
}
void insertNode(Node *&tail, int element, int data)
{
    // assuming element is present in list
    Node *nodeToInsert = new Node(data);
    Node *temp = tail;

    // if tail==null
    if (temp == NULL)
    {
        tail = nodeToInsert;
        nodeToInsert->next = nodeToInsert;
    }
    // element is present
    else
    {
        while (temp->data != element)
        {
            temp = temp->next;
        }
        // then we will get node which contain element as data
        nodeToInsert->next = temp->next;
        temp->next = nodeToInsert;
    }
}
bool circularOrNot(Node *&tail)
{
    if (tail == NULL)
        return true;

    Node *temp = tail->next;
    while (temp != NULL && temp != tail)
    {
        temp = temp->next;
    }
    if (temp == NULL)
        return false;
    if (temp == tail)
        return true;
}
int main()
{
    Node *tail = NULL;
    int element = 5;
    insertNode(tail, element, 6);
    print(tail);
    insertNode(tail, 6, 7);
    print(tail);
    insertNode(tail, 7, 9);
    insertNode(tail, 9, 10);
    print(tail);
    insertNode(tail, 7, 8);
    print(tail);
    if (circularOrNot(tail))
        cout << "circular" << endl;
    else
        cout << "not circular" << endl;

    return 0;
}