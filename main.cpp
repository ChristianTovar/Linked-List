#include <iostream>
#include <vector>

using namespace std;

class Node
{
    public:
        int data;
        Node* next;

    Node(int datax)
    {
        data=datax;
        next=nullptr;
    }
};

class LinkedList
{
    public:
    Node* head;

    LinkedList(){

        head=nullptr;
    }


    void addNode(int data)
    {
        Node *nodito=new Node(data);

        if(!this->head)
        {
            this->head=nodito;
        }
        
        else
        {
            //temp
            Node *temp=head;
            
            while(temp->next)
            {
                temp=temp->next;
            }

            //set node as temp successor
            temp->next=nodito;
        }
    }

    void show()
    {
        //temp
        Node *temp=head;
        
        do
        {
            cout<<temp->data<<" ";
            
            temp=temp->next;
        }
        while(temp);

        cout<<endl;
    }

    void reverse()
    {
        Node *prev=nullptr,*next=nullptr;
        Node * curr=this->head;

        while(curr)
        {
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }

        head=prev;
    }


};


int main(){

    LinkedList *Lista = new LinkedList();

    Lista->addNode(1);

    Lista->addNode(2);

    Lista->addNode(3);

    Lista->addNode(4);

    Lista->show();

    Lista->reverse();

    Lista->show();

}
