#include <stdio.h>

void InsertionSort(int a[], int len);
int main()
{
	int a[] = {1,83,32,4,21,341};
	InsertionSort(a,6);
	for (int i = 0; i < 6; ++i) {
		printf("%d\n", a[i]);
	
	}
	return 0;



}
 
void InsertionSort(int a[], int len)
{
	for (int i = 0; i < len - 1; ++i) {
		for (int j = i + 1; j > 0;j--) {
			if (a[j] < a[j-1]) {
				int tmp = a[j];
				a[j] = a[j-1];
				a[j-1] = tmp;
			}
			else 
				break;
		
		
		
		}
	
	}




}
