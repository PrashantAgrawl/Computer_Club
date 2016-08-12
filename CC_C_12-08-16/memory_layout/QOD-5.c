//MNNIT QOD- QUESTION 5
//Please give the exact output and behaviour as your answer

#include<stdio.h>
#include<string.h>
//The expectation from the program is to make the two strings as similar as possible.
int main()
{
  char* s="ques1 here";
  char t[13]="ques2 there";
  printf("1:s=%s\nt=%s\n",s,t);
  t[6]=' ';
  printf("2:t=%s\ns=%s",t,s);
  s[4]='2';
  printf("3:s=%s\nt=%s\n",s,t);
  return 0;	
}
