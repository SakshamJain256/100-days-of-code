#include <stdio.h>

int main() {
    int n, key, i, index = -1;
    scanf("%d", &n);

    int arr[n];
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    scanf("%d", &key);

    for(i = 0; i < n; i++) {
        if(arr[i] == key) {
            index = i;
            break;
        }
    }

    if(index == -1)
        printf("-1");
    else
        printf("Found at index %d", index);

    return 0;
}
