#include<iostream>
using namespace std;

class Node{
    public:
    int key;
    int data;
    Node* next;

    Node(){
        key=0;
        data=0;
        next=NULL;
    }

    Node(int k,int d){
        key=k;
        data=d;
    }

};

class SinglyLInkedList{
    public:
    Node* head;
    SinglyLInkedList(){
        head=NULL;
    }
    SinglyLInkedList(Node* n){
        head=n;
    }
    //1.Check if node exits using key value
    Node* nodeExists(int k){
        Node* temp =NULL;
        Node* ptr=head;
        while(ptr!=NULL){
            if(ptr->key==k)
            {
                temp=ptr;
            }
            ptr=ptr->next;
        }
        return temp;
    }

    //2.Append a node to the list
    void appendNode(Node* n){
        if(nodeExists(n->key!=NULL)){
            cout<<"Node already exists with the key :"<<n->key<<"Append another node  with the different key value"<<endl; 
        }
        else{
            if(head==NULL){
                head=n;
                cout<<"Node appended"<<endl;
            }
            else{
                Node* ptr =head;
                while (ptr->next!=NULL)
                {
                    ptr=ptr->next;
                }
                ptr->next=n;
                cout<<"Node appended."<<endl;
            }
        }

    }

    //3.Prepend node in the list
    void prependNode(Node* n){
        if(nodeExists(n->key!=NULL)){
            cout<<"NOde already exists with the key : "<<n->key<<".Prepend another node with different key value"<<endl;
        }
        else{
            n->next=head;
            head=n;
            cout<<"Node prepended."<<endl;
        }
        
    }

    //4.Insert a node after a particular node in list.
    
    

};

int main(){


    return 0;
}