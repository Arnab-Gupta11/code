#include<stdio.h>
#include<string.h>

int is_palindrome(char str[]){
  int flag=1;
  int len=strlen(str);
  for(int i=0, j=len-1; i<len, j>=0;i++,j--){
    if(str[i]!=str[j]){
      flag=0;
      break;
    }
  }
  return flag;
}


int main(){
  char str[1001];
  scanf("%s",&str);
  int res=is_palindrome(str);
  if(res==1){
    printf("Palindrome");
  }else{
    printf("Not Palindrome");
  }
  return 0;
}
