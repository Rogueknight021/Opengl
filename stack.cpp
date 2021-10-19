#include<bits/stdc++.h>
using namespace std;
int main()
{
	char src[50], dest[50];

	strcpy(src, "This is source");
	strcpy(dest, "This is destination");

	strncat(dest, src, 5);

	printf("最终的目标字符串： |%s|", dest);

	return 0;
}