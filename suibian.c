/*第一题   密码
#include<stdio.h>
#include<string.h>
int main(){
    int n,i;
    char a[50];
    scanf("%d",&n);
    scanf("%s",a);
    for(i=0;i<strlen(a);i++){
        a[i]=(a[i]-'a'+n)%26+'a';
    }
    printf("%s\n",a);
}
*/

/*第二题   孪生素数
#include<stdio.h>
int judge(int n);
int main(){
    int m,n;
    int i,cnt;
    cnt=0;
    scanf("%d%d",&m,&n);
    for(i=m;i<=n;i++){
        if(judge(i)==1&&judge(i+2)==1&&i+2<=n){
            cnt++;
        }
    }
    printf("%d\n",cnt);
    return 0;
}

int judge(int n){
      int i;
      if(n==1)  return 0;
      else{
      for(i=2;i<n;i++){
          if(n%i==0){
              return 0;
          }
      }
    return 1;
      }
}
*/


/*
#include<stdio.h>
int main(){
    int n,i,j,t,cnt,k;
    cnt=0;
    int a[10]={6,2,5,5,4,5,6,3,7,6};
    scanf("%d",&n);
    t=n-4;
   for(i=0;;i++){
       for(j=0;;j++){
           if(i>9)
       }
   }
    printf("%d\n",cnt);
    return 0;
}
*/
/*忘了
#include <stdio.h>
#include <stdlib.h>

typedef int ElementType;
typedef struct Node *PtrToNode;
struct Node {
    ElementType Data;
    PtrToNode   Next;
};
typedef PtrToNode List;

List Read(); /* 细节在此不表 */
//void Print( List L ); /* 细节在此不表 */
/*
List Insert( List L, ElementType X );

int main()
{
    List L;
    ElementType X;
    L = Read();
    scanf("%d", &X);
    L = Insert(L, X);
    Print(L);
    return 0;
}
*/
/* 你的代码将被嵌在这里 */
/*List Insert( List L, ElementType X ){
    PtrToNode p,r;
    for(p=L;p;p=p->Next){
         r=p->Next;
         if(X>=p->Data&&X<r->Data){
                PtrToNode q;
                q=(PtrToNode)malloc(sizeof(struct Node));
                q->Data=X;
                q->Next=r;
                p->Next=q;
         }
    }
    return (L);
}*/



#include <stdio.h>
#include <string.h>
int main(int argc, char *argv[]) {

   char a[10000];
   gets(a);
   int i=0;
   int count=0;
   int flag=0;
   for(i=0;i<strlen(a);i++){	  
   	  if(a[i]!=32){
   	  	 count++;   //记录一个单词由多少个字母组成
   	  }
	  else{
	  	if(count!=0){//将首个字母转换成大写  	
			if(a[i-count]>='a'&&a[i-count]<='z') a[i-count]-= 32;
		  	count=0;
	  	    }
	  }   	 	  
   }
   if(count>0) {    //最后一个单词
   	  if(a[i-count]>='a'&&a[i-count]<='z') a[i-count]-= 32;
   } 
   for(i=0;i<strlen(a);i++){
   		printf("%c",a[i]);
   } 
	return 0;
}
