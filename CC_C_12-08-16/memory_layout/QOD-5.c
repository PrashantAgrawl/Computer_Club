//MNNIT QOD- QUESTION 5
//Please give the exact output and behaviour as your answer

#include<stdio.h>
#include<string.h>
//The expectation from the program is to make the two strings as similar as possible.
int main()
{
  char* s="ques1 here";					 //"ques1 here" is present in text segment , s is pointer to the string ,i.e s points to text segment
  char t[13]="ques2 there";				 //"ques2 there" is present in text segment ,its copy is made and store in t[] which is present in stack
  printf("1:s=%s\nt=%s\n",s,t);			
  t[6]=' ';								 //changing value in stack
  printf("2:t=%s\ns=%s",t,s);
  s[4]='2';								//trying to change value present in text segment , it generates segmentation fault .
  printf("3:s=%s\nt=%s\n",s,t);
  return 0;	
}
