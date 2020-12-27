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

/*第二题   孪生素数*/
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

