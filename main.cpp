#include <iostream>
using namespace std;
class linklist{
    struct node{
        int data;
        node *next;
    };
    node *start,*temp,*newnode,*temp1;
    int data1,num,num1,num2,num3;
public:
    linklist(){
        start=NULL;
    }
    void enter();
    void display();
    void delete_element();
    void search_data();
};
void linklist::enter(){
    cout<<"Enter the number of nodes:-";
    cin>>num;
    for(int i=0;i<num;i++){
        cout<<"\nEnter the data:-";
        cin>>data1;
        if(start == NULL){
            start = new node;
            start->data = data1;
            start->next = NULL;
        }
        else{
            temp = start;
            while(temp->next != NULL){
                temp = temp->next;
            }
            newnode = new node;
            newnode->data = data1;
            newnode->next = NULL;
            temp->next = newnode;
        }
    }
}
void linklist::display(){
    temp = start;
    while(temp!=NULL){
        cout<<temp->data<<"\t";
        temp=temp->next;
    }
}
void linklist::delete_element(){
    temp = start;
    cout<<"\nEnter the data to be deleted:-";
    cin>>num3;
    while(temp->data!=num3){
        temp1 = temp;
        temp = temp->next;
    }
    if(temp == start){
        start = temp->next;
        temp->next=NULL;
    }
    else{
        temp1->next = temp->next;
        temp->next = NULL;
    }

}
void linklist::search_data(){
    temp = start;
    cout<<"\nEnter the data to be searched:-";
    cin>>num3;
    while(temp->data!=num3){
        temp = temp->next;
    }
    if(temp->data == num3){
        cout<<"Data found in the list:"<<temp->data;
    }
    else if(temp->data != num3){
        cout<<"Data not found";
    }
}
int main()
{
    linklist l;
    l.enter();
    l.display();
    l.delete_element();
    l.display();
    l.search_data();
}
