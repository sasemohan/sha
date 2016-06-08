#include<stdio.h>
#include<string.h>
void main()
{
char s[] , t;
int i,j=0;
gets(s);
i = 0;
j = strlen(s) - 1;
while (i < j) {
t = s[i];
s[i] = s[j];
s[j] = t;
i++;
j--;
}
