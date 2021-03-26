#include "../../../lib/stdio.h"
#include "../../../drivers/video/vbe.h"
#include "../../../lib/prompt.h"
int main(){
    Color red = {245, 49, 0}, gray = {105, 100, 99}, blue = {19, 144, 194};
    VBE_display_circle(50, 50, 50);
    printf("%s", prompt);
}
