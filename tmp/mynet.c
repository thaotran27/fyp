
    #include "mynet.h"
    #include <eml_test.h>

    static void classify(const float *values, int length, int row) {
        printf("%d,%f\n", row, (float)mynet_predict(values, length));
    }
    int main() {
        eml_test_read_csv(stdin, classify);
    }
    