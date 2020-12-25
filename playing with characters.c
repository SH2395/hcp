#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{ char ch;
  char s[100];
  char sen[100];
  // Debug the print statements:
  scanf("%c %s ",&ch,&s);
  scanf("%[^\n]%*c",&sen);
  printf("%c\n%s\n%s",ch,s,sen);
 return 0;
}
