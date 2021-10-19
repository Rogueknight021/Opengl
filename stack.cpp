#include<bits/stdc++.h>
using namespace std;
int main()
{
	char src[50], dest[50];
	int i,j,k;
	char g;
	strcpy(src, "This is source");
	strcpy(dest, "This is destination");

	strncat(dest, src, 5);

	return 0;
}
