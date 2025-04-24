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

    // ��� ����
    for (int i = 0; i < topBottomMargin; i++) {
        printf("\n");
    }

    // ��� �Ķ� ��� ���
    for (int i = 0; i < fillHeight; i++) {
        // ���� ����
        for (int j = 0; j < sideMargin; j++) {
            printf(" ");
        }
        // �Ķ��� ��� ���
        printf("%s", blueBg);
        for (int j = 0; j < fillWidth; j++) {
            printf(" ");
        }
        printf("%s", reset);
        // ���� ���� + �ٹٲ�
        printf("\n");
    }

    // �ϴ� ����
    for (int i = 0; i < topBottomMargin; i++) {
        printf("\n");
    }

    return 0;
}
