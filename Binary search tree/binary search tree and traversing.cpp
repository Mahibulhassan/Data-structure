#include<iostream>
using namespace std;
struct node
{
    int data;
    node* left;
    node* right;
};

node* create(int item)
{
    node* newnode=new (node);
    if (newnode==NULL)
    {
        cout<<"Tree not be implemented!!!!!"<<endl;
        exit(1);
    }
    newnode->data=item;
    newnode->left=NULL;
    newnode->right=NULL;
    return newnode;
}
node* ins(node* head,int data)
{
    if (head==NULL)
    {
        head=create(data);
    }
    else if(data<=head->data)
    {
        head->left=ins(head->left,data);
    }
    else
    {
        head->right=ins(head->right,data);
    }
    return head;
}

bool Search(node* head,int data)
{
    if(head == NULL)
    {
        return false;
    }
    else if(head->data == data)
    {
        return true;
    }
    else if(data <= head->data)
    {
        return Search(head->left,data);
    }
    else
    {
        return Search(head->right,data);
    }
}

void display(node* head)
{
    cout<<head->data<<" ";
    if (head->left!=NULL)
    {
        display(head->left);
    }
    if (head->right!=NULL)
    {
        display(head->right);
    }
}


int main()
    {
        node* head=NULL;

        int n;
        cout<<"How many number you want to insert: ";
        cin>>n;
        while(n--)
        {
            int k;
            cin>>k;
            head=ins(head,k);
        }

        int number;
        cout<<"Enter number be searched\n";
        cin>>number;
        if(Search(head,number) == true)
            cout<<"Found\n";
        else
            cout<<"Not Found\n";

            display(head);
        }
