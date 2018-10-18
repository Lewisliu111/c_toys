#include <stdio.h>

void ShellSort(int a[], int len);
int main()
{



}

void ShellSort(int a[], int len)
{
	int increment = len;

	while (1) {
		increment /= 2;

		for (int i = 0; i < increment; i ++) { //根据增量分为若干子序列
				for (int j = i + increment; j < len; j += increment) {
					for (int k = j; k > i; k -= increment) { 
					
						if (a[k] < a[k-increment]) { //对子序列进行InsertionSort
							tmp = a[k];
							a[k] = a[k-increment];
							a[k-increment] = tmp;
						}else 
							break;
						}					
					}
				}
		}
	}
} 






