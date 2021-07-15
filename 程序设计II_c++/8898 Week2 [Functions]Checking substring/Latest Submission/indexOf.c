#include <stdio.h>
#include <string.h>
int ifsub(const char *s1, const char *s2,int len){
	for (int i = 0; i < len;i++){
		if(s1[i]!=s2[i])
			return 0;
	}
	return 1;
}
int indexOf(const char *s1, const char *s2){
	int len1=strlen(s1);
	int len2 = strlen(s2);
	for (int i = 0; i <= len2 - len1;i++){
		if(ifsub(s1,s2+i,len1)){
			return i;
		}
	}
	return -1;
}