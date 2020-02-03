#include <stdio.h>
#include <stdlib.h>

// /* 値を入れ替える関数 */
// void swap (int *x, int *y) {
//   int temp;    // 値を一時保存する変数

//   temp = *x;
//   *x = *y;
//   *y = temp;
// }

// /*
// pivotを決め、
// 全データをpivotを境目に振り分け、
// pivotの添え字を返す
// */
// int partition (int array[], int left, int right) {
//   int i, j, pivot;
//   i = left;
//   j = right + 1;
//   pivot = left;   // 先頭要素をpivotとする

//   do {
//     do { i++; } while (array[i] > array[pivot]);
//     do { j--; } while (array[pivot] > array[j]);
 
//     if (i < j) { 
//         swap(&array[i], &array[j]); 
//     }
//   } while (i < j);

//   swap(&array[pivot], &array[j]);   //pivotを更新

//   return j;
// }

// /* クイックソート */
// void quick_sort (int array[], int left, int right) {
//   int pivot;

//   if (left < right) {
//     pivot = partition(array, left, right);
//     quick_sort(array, left, pivot-1);   // pivotを境に再帰的にクイックソート
//     quick_sort(array, pivot+1, right);
//   }
// }

int compare_int(const void *a, const void *b)
{
    return *(int*)b - *(int*)a;
}


int main(void){
    const int SIZE = 5; //定数として配列のサイズを宣言                          
    int scores[SIZE] = {0, 60, 70, 100, 90};
    int i;

    printf("Before sort: ");
    for (i = 0; i < SIZE; i++) {
         printf("%d ", scores[i]); 
        }
    printf("\n");
    
    // quick_sort(scores,0,4);

    qsort(scores,SIZE,sizeof(int),compare_int);

    printf("After sort: ");
    for (i = 0; i < SIZE; i++) {
         printf("%d ", scores[i]); 
        }
    printf("\n");
    
    return 0;
}