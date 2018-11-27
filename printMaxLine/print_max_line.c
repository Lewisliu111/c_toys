#include <stdio.h>
/*
 * 从文件中读入问本行，并把最长行打印出来
 */
#define MAXLINE 1000  //允许输入行的最大长度

int Getline(char line[], int maxline);
void copy(char des[], char src[]);

int main()
{
	int len;         //当前行的长度
	int max;         //当前发现最大行的最大长度
	char line[MAXLINE];   //当前的输入行
	char longest[MAXLINE];  //目前保存最大行

	max = 0;
	
	while ((len = Getline(line, MAXLINE)) > 0) { //循环读入行
		if (len > max) {
			max = len;
			copy(longest, line);
		}

		if (max > 0) {
			printf("the max lonGest is %s", longest);
		}

		return 0;
		

	}

}

int Getline(char s[], int maxline)
{
	int c, i;

	for (i = 0; i < maxline -1 && (c = getchar()) != EOF && c != '\n'; ++i) {
		s[i] = c;
	}

	if (c == '\n'){
		s[i++] = c;
	}
	s[i] = '\0';
	return i;
}

void copy(char des[], char src[])
{
	int i = 0;
	while ((des[i] = src[i]) != '\0')
		++i;
}
