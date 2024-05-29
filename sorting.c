#include <stdio.h>
#include <string.h>

int main() {
    //冒泡排序
    // 基本逻辑 ： 先创建两个指针（a,b），指针a指向0，b指向1，先移动b指针和a循环比较，将数组中最小/最大的数放在第0位，然后移动a（+1），b重新回到a（后一位）再进行循环
    void bubbleSorting(int* arr, int len) {
      int i = 0, j = 0;
      for (i = 0; i < len; i++) {
          for (j = i+1; j < len; j++) {
              if (arr[i] < arr[j]) {
                  arr[i] = arr[i] + arr[j];
                  arr[j] = arr[i] - arr[j];
                  arr[i] = arr[i] - arr[j];
              }
          }
      }
      for (i = 0; i < len; i++) {
          printf("%d ",arr[i]);
      }
      printf("\n");
  }
  return 0;
}
