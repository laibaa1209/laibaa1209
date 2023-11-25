#include <stdio.h>

struct Box {
    int length;
    int width;
    int height;
};

int main() {
    int n;
    printf("Enter the number of boxes: ");
    scanf("%d", &n);

    struct Box boxes[n];

    printf("Enter the details of each box (length width height):\n");
    for (int i = 0; i < n; i++) {
        scanf("%d %d %d", &boxes[i].length, &boxes[i].width, &boxes[i].height);
    }

    int tunnelHeight = 41;

    printf("Volumes of boxes that can be transported:\n");
    for (int i = 0; i < n; i++) {
        if (boxes[i].height < tunnelHeight) {
            int volume = boxes[i].length * boxes[i].width * boxes[i].height;
            printf("%d\n", volume);
        }
    }

    return 0;
}