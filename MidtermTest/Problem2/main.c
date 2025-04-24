#include <stdio.h>

int main() {
    const char* blueBg = "\033[44m";
    const char* reset = "\033[0m";

    int width = 80;
    int height = 25;
    int topBottomMargin = 1;
    int sideMargin = 2;
    int fillWidth = width - (sideMargin * 2);
    int fillHeight = height - (topBottomMargin * 2);

    // 상단 여백
    for (int i = 0; i < topBottomMargin; i++) {
        printf("\n");
    }

    // 가운데 파란 배경 출력
    for (int i = 0; i < fillHeight; i++) {
        // 좌측 여백
        for (int j = 0; j < sideMargin; j++) {
            printf(" ");
        }
        // 파란색 배경 출력
        printf("%s", blueBg);
        for (int j = 0; j < fillWidth; j++) {
            printf(" ");
        }
        printf("%s", reset);
        // 우측 여백 + 줄바꿈
        printf("\n");
    }

    // 하단 여백
    for (int i = 0; i < topBottomMargin; i++) {
        printf("\n");
    }

    return 0;
}
