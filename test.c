#include<stdio.h>
#include<stdlib.h>

typedef struct linklist{
    int data;
    struct linklist *next;
}Link;

Link *l1head=NULL;
struct linklist* addTwoNumbers(Link* l1,Link* l2);
void reverse_output(Link* head);

int main(){
    int n;
    int number;
   Link *l1head=NULL;
    do{
      scanf("%d",&number);
      if(number>=0){
          Link *p=(Link *)malloc(sizeof(Link));
          p->data=number;
          p->next=NULL;
          Link *s=l1head;
          if(s){
              while(s->next){
                  s=s->next;
              }
              s->next=p;
          }else{
              l1head=p;
          }
      }
    }while(number>=0);
    
   Link *l2head=NULL;
    do{
      scanf("%d",&number);
      if(number>=0){
          Link *p=(Link *)malloc(sizeof(Link));
          p->data=number;
          p->next=NULL;
          Link *s=l2head;
          if(s){
              while(s->next){
                  s=s->next;
              }
              s->next=p;
          }else{
              l2head=p;
          }
      }
    }while(number>=0);
    Link *u;
    u=addTwoNumbers(l1head,l2head);
    while(u){
        printf("%d ",u->data);
        u=u->next;
    }
    printf("\n");

    Link* p;
    p=addTwoNumbers(l1head,l2head);
    reverse_output(p);

    return 0;
}

 struct linklist* addTwoNumbers(Link* l1, Link* l2){
    int x, y, num, flag=0;
    Link *p = l1, *q = l2;
    Link *cur = (Link*)malloc(sizeof(Link));
    cur->next = NULL;
    Link *ret = cur;
    while(p!=NULL || q!=NULL)
    {
        x = (p!=NULL)?p->data:0;
        y = (q!=NULL)?q->data:0;
        num = x+y+flag;
        flag = num/10;
        cur->next = (Link*)malloc(sizeof(Link));
        cur = cur->next;
        cur->data = num%10;
        cur->next = NULL;
        if(p!=NULL)
            p = p->next;
        if(q!=NULL)
            q = q->next;
    }
    if(flag > 0)
    {
        cur->next = (Link*)malloc(sizeof(Link));
        cur = cur->next;
        cur->data = 1;
        cur->next = NULL;
    }
    
    return ret;
}

  void reverse_output(Link* p){
	
	if(p->next != NULL){
		reverse_output(p->next);

	printf("%d ", p->data);
 }
 printf("\n");
  }

