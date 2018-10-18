#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
char* trim(char* str);

int main()
{
	char* str = "   hello world  ";
	printf("%s", trim(str));

}

char* trim(char* str)
{
	char* start, * end = NULL;
	
	if (str == NULL)
		return NULL;
	
	while (isspace(*str))
		str++;
	for (start = str; *str != '\0'; str++)
	{
		if (isspace(*str))
		{
			end = str++;
			while (isspace(*str))
				str++;
			if (*str != '\0')
				end = NULL;
		
		}
	
	}

	if(end)
		*end = '\0';
	return start;
}
