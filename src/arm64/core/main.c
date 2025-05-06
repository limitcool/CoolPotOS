#include "limine.h"
#include "gop.h"
#include "krlibc.h"
#include "io.h"

void kmain(){
    close_interrupt;
    init_gop();

    for(;;) __asm__("wfi");
}
