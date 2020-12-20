#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node *next;
}Node;

void *add(Node **head,int number);
int main(){
    int number;
    Node *head;
    head=NULL;
    do{
       scanf("%d",&number);
       if(number!=-1){
           add(&head,number);
       }
    }while(number!=-1);
    Node  *t;
    for(t=head;t;t=t->next){
        printf("%d",t->data);
    }
    return 0;
}

void *add(Node **head,int number){
    Node *p=(Node *)malloc(sizeof(Node));
    p->data=number;
    p->next=NULL;
    Node *s=*head;
    if(s){
        while(s->next){
            s=s->next;
        }
        s->next=p;
    }else{
        *head=p;
    }
    
}