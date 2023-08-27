#include <stdio.h>

union Data {
    int intValue;
    float floatValue;
    char stringValue[20];
};

int main() {
    union Data data;

    data.intValue = 42;
    printf("Integer value: %d\n", data.intValue);

    data.floatValue = 3.14;
    printf("Float value: %f\n", data.floatValue);

    strcpy(data.stringValue, "Hello, Union!");
    printf("String value: %s\n", data.stringValue);

    printf("Size of union Data: %d bytes\n", sizeof(data));

    return 0;
}
