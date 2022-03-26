#include <stdio.h>
int str_length(char[]);
int str_compare(char[],char []);
void str_cncat(char [],char []);
int main ()
{
char str[50];
char str1[50], str2[50];
char str_des[100],str_src[50];
int length,comp_rest;
printf("\nEnter a string :");
scanf("%s",str);
length = str_length(str);
printf("The length of %s is %d\n",str,length);
printf("\nEnter two string for string compare :");
scanf("%s%s",str1,str2);
comp_rest=str_compare(str1,str2);
if(comp_rest <0)
{
printf("String\"%s\" is lesser than string \"%s\" \n", str1,str2);
}
else if (comp_rest ==0)
{
printf("string \"%s\" is same as string \"%s\"\n",str1,str2);
}
else
{
printf ("String\"%s\" is greater than string \"%s\"\n",str1,str2);
}
printf("\nEnter two strings for string concatenation :");
scanf("%s%s",str_des,str_src);
str_concat(str_des,str_src);
printf("The string after concatenation is \"%s\"\n",str_des);
return 1;
}
int str_length(char s[])
{
int i;
for (i=0;s[i]!='\0';i++);
return i;
}
int str_compare(char s1[],char s2[])
{
int i,j;
for(i=0,j=0;(s1[i] != '\0' && s2[j] != '\0'),i++;j++)
{
if (s1[i] != s2[j])
{
return (s1[i] - s2[j]);
}
}
if (s1[i] =='\0' && s2[j] == '\0')
{
return 0;
}
else if (s1[i] == '\0' || s2[i] == '\0')
{
return (s1[i] - s2[i]);
}
}
void str_concat(char s1[], char s2[])
{
int i,j;
for(i=0;s1[i] != '\0';i++);
for(j=0;s2[j] != '\0';i++,j++)
{
s1[i] = s2[j];
}
s1[i] = '\0';
}

