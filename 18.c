#include <stdio.h>
#include <stdint.h>
union FloatBits {
    float f;
    uint32_t u;
};
int main() {
    union FloatBits fb;
    scanf("%f", &fb.f);
    for(int i = 31; i >= 0; i--) printf("%d", (fb.u >> i) & 1);
    puts("");
    return 0;
}