#include <stdio.h>

#define TABNUM 4

int main()
{
	char text[1000];
	char c;
	int index = 0;

	while ((c=getchar()) != EOF) {
		if (c == '\t') {
			for (int i = 0; i < TABNUM; ++i) {
				text[index] = ' ';
				index++;
			}
		}

		else {
			text[index++] = c;
		}
	}

	printf("%s\n", text);


}
