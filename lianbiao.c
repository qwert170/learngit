/*#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

typedef struct node{
    int data;
    struct node *next;
}Node;
*/
/*尾插法*/
//有头节点
/*
int main(){
    Node *head;
    Node *p;
    int number;
    head=(Node *)malloc(sizeof(Node));//带头节点所以要初始化
    head->next=NULL;//带头节点所以要初始化
    p=head;

    while(1){
      scanf("%d",&number);
      if(number==0)  break;
      Node *s=(Node *)malloc(sizeof(Node));
      s->data=number;

      p->next=s;
      p=s;
    }
   p->next=NULL;

    p=head->next;
    while(p){
        printf("%d ",p->data);
        p=p->next;
    }
       printf("\n");*/
     /*插入    在第 i个位置插入新节点*/
    /*int j=0;
    int i=2;
    Node *w;
    w=head;
    Node *t;
    while(j<i-1&&w){
        w=w->next;
        j++;
    }
     t=(Node *)malloc(sizeof(Node));
     scanf("%d",&t->data);
     t->next=w->next;
     w->next=t;

     p=head->next;
    while(p){
        printf("%d ",p->data);
        p=p->next;
    }
    printf("\n");
    //删除 在第x个位置删除
     int k,x;
     k=0;x=3;
     w=head;
     while(k<x-1&&w){
         w=w->next;
         k++;
     }
     Node *e;
     e=(Node *)malloc(sizeof(Node));
     e=w->next;
     w->next=e->next;
     free(e);

     p=head->next;
    while(p){
        printf("%d ",p->data);
        p=p->next;
    }
    
    //查询
    /*int shuzi;
    printf("找哪个数");
    scanf("%d",&shuzi);
    p=head->next;
    while(p){
        if(p->data==shuzi){
            printf("找到了%d",shuzi);
            break;
        }
        p=p->next;
    }*/
    //链表的长度
   /* int cnt=0;
    p=head->next;
    while(p){
        cnt++;
        p=p->next;
    }
    printf("\n%d",cnt);
    
}*/


/*头插法
int main(){
   Node *head;
   Node *s;
   head->next=NULL;
   while(1){
       Node *p=(Node *)malloc(sizeof(Node));
       scanf("%d",&p->data);
       if(p->data==0)   break;
       else{
           p->next=head->next;
           head->next=p;
       }
   }

    s=head->next;
    while(s){
        printf("%d ",s->data);
        s=s->next;
    }
}
*/




/*链表的合并
#include<stdio.h>
#include<stdlib.h>
typedef struct linklist{
    int data;
    struct linklist *next;
}Node;

void create(Node **p);
void hebin(Node *p,Node *q);
int main(){
    Node *head1,*head2;
    head1=(Node *)malloc(sizeof(Node));
    head1->next=NULL;
    head2=(Node *)malloc(sizeof(Node));
    head2->next=NULL;
    create(&head1);
    create(&head2);
    hebin(head1,head2);

}

void hebin(Node *p,Node *q){
      Node *r,*s,*t;
      Node *a;
      s=p->next;
      t=q->next;
      r=a=p;
      while(s&&t){
          if(s->data<=t->data){
              r->next=s;
              r=s;
              s=s->next;
          }else{
              r->next=t;
              r=t;
              t=t->next;
          }
          if(s)  {
              r->next=s;
          }
          if(t)  r->next=t;
      }
      t=a->next;
      while(t){
          printf("%d ",t->data);
          t=t->next;
      }
}

void create(Node **p){
       int number;
      Node *s;
      s=*p;
       while(1){
           scanf("%d",&number);
           if(number==0)   break;
           Node *t=(Node *)malloc(sizeof(Node));
           t->data=number;
           s->next=t;
           s=t;
       }
       s->next=NULL;

       s=(*p)->next;
       while(s){
           printf("%d ",s->data);
           s=s->next;
       }
       printf("\n");
}
*/

/*链表的逆置  还不太懂
#include<stdio.h>
#include<stdlib.h>
typedef struct linklist{
    int data;
    struct linklist *next;
}Node;

void add(Node **head);
void reverse(Node **head);

int main(){
    Node *head;
    head=(Node *)malloc(sizeof(Node));
    head->next=NULL;
    add(&head);
    reverse(&head);
    return 0;
}

void reverse(Node **head){
    Node *p,*q;
    p=(*head)->next;
    (*head)->next=NULL;
    while(p){
        q=p->next;
        p->next=(*head)->next;
        (*head)->next=p;
        p=q;
    }
    p=(*head)->next;
    while(p){
        printf("%d ",p->data);
        p=p->next;
    }
    printf("\n");
}

void add(Node **head){
    int number;
    Node *p;
    p=*head;
    while(1){
       scanf("%d",&number);
       if(number==0)   break;
       Node *s=(Node *)malloc(sizeof(Node));
       s->data=number;

       p->next=s;
       p=s;
    }
    p->next=NULL;
    
    p=(*head)->next;
    while(p){
        printf("%d ",p->data);
        p=p->next;
    }
    printf("\n");
}
*/


#include<stdio.h>
#include<stdlib.h>

typedef struct linklist{
    int data;
    struct linklist *next;
}Node;

void add(Node **head);
void quchu(Node **L1,Node **L2);
int main(){
    Node *L1,*L2;
    L1=(Node *)malloc(sizeof(Node *));
    L1->next=NULL;
    L1=(Node *)malloc(sizeof(Node *));
    L1->next=NULL;
    add(&L1);
    add(&L2);
    quchu(&L1,&L2);
    return 0;
}

void quchu(Node **L1,Node **L2){
    Node *p,*q,*r;
    Node *A;
    Node *t;
    t=(Node *)malloc(sizeof(Node));
    r=A;
    p=(*L1)->next;
   
    while(p){
         q=(*L2)->next;
        while(q){
            if(p->data==q->data){
               if(p==*L1){
                t=p;
                p=p->next;
                *L1=p;
                free(t);        
               }else{
                   Node *e;
                   e=(Node *)malloc(sizeof(Node));
                   e=p;
                   t->next=p;
                   t->next=p->next;
                   free(e);
               }
            }
            q=q->next;
        }
        p=p->next;
    }

    p=(*L1)->next;
    while(p){
        printf("%d ",p->data);
        p=p->next;
    }
}

void add(Node **head){
    int number;
    Node *p;
    p=*head;
    while(1){
       scanf("%d",&number);
       if(number==0)   break;
       Node *s=(Node *)malloc(sizeof(Node));
       s->data=number;

       p->next=s;
       p=s;
    }
    p->next=NULL;
    
    p=(*head)->next;
    while(p){
        printf("%d ",p->data);
        p=p->next;
    }
    printf("\n");
}