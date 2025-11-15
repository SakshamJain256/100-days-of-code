#include <stdio.h>

int main() {
    int n, key, i;
    scanf("%d", &n);

    int arr[n];
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    scanf("%d", &key);

    int low = 0, high = n - 1, mid, index = -1;

    while(low <= high) {
        mid = (low + high) / 2;

        if(arr[mid] == key) {
            index = mid;
            break;
        }
        else if(arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }

    if(index == -1)
        printf("-1");
    else
        printf("Found at index %d", index);

    return 0;
}
