#include <stdio.h>

/*时间复杂度O(N*lgN)*/
/*快排思想：分治法*/
/*
 *基本思想：1.从数列中挑出一个元素作为“pivot”
 *			2.重新排列数列，所有比pivot小的元素放在它前面，所有比pivot大或等于的放在它后面。
 *			3.recursive对左右两个小数列重复第二步，知道各个区间只有一个数。
 *
 */
void QuickSort(int a[], int l, int r);

int  main()
{
	int a[] = {72, 6, 57, 88, 60, 42, 83, 73, 48, 85};
	QuickSort(a, 0, 9);
	for (int i = 0; i < 10; ++i)
		printf("%d\n", a[i]);
	return 0;



}

void QuickSort(int a[], int l, int r) 
{

	if (l >= r)
		return ;
	int pivot = a[l];

	int i = l;
	int j = r;
	
	while (i < j) {  //从右向左找第一个小于pivot的值
		while (i < j && a[j] >= pivot)
			j--;
		if (i < j) {
			a[i] = a[j];
			i++;
		}

		while (i < j && a[i] < pivot) { //从左向右找第一个大于pivot的值
				i++;
			if (i < j ) {
				a[j] = a[i];
				j--;
			}
		}
		//i == j
		a[i] = pivot;
		
		QuickSort(a, l, i - 1);  //recursive
		QuickSort(a, i + 1, r);  //recursive
	}
}
