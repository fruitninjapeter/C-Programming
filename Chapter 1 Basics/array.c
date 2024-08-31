#include <stdio.h>
#include <stdlib.h>

int main() {
    int luckyNums[] = {4, 8, 15, 16, 23, 42};
    printf("Index 0 is %d\n", luckyNums[0]);
    printf("Index 1 is %d\n", luckyNums[1]);
    printf("Index 2 is %d\n", luckyNums[2]);
    printf("Index 3 is %d\n", luckyNums[3]);
    printf("Index 4 is %d\n", luckyNums[4]);
    printf("Index 5 is %d\n", luckyNums[5]);
    printf("What 6 Lucky Numbers do you want now?\n");
    printf("Enter: ");
    int lucky_nums[6];
    scanf("%d", &lucky_nums[0]);
    printf("Enter: ");
    scanf("%d", &lucky_nums[1]);
    printf("Enter: ");
    scanf("%d", &lucky_nums[2]);
    printf("Enter: ");
    scanf("%d", &lucky_nums[3]);
    printf("Enter: ");
    scanf("%d", &lucky_nums[4]);
    printf("Enter: ");
    scanf("%d", &lucky_nums[5]);
    printf("Index 0 is %d\n", lucky_nums[0]);
    printf("Index 1 is %d\n", lucky_nums[1]);
    printf("Index 2 is %d\n", lucky_nums[2]);
    printf("Index 3 is %d\n", lucky_nums[3]);
    printf("Index 4 is %d\n", lucky_nums[4]);
    printf("Index 5 is %d\n", lucky_nums[5]);
    return 0;
}