#include "greatest.h"

SUITE_EXTERN(suite_utils);

GREATEST_MAIN_DEFS();

int main(int argc, char *argv[]) {
        GREATEST_MAIN_BEGIN();
        RUN_SUITE(suite_utils);
        GREATEST_MAIN_END();
}
/* vim: set tabstop=8 shiftwidth=8 expandtab textwidth=0: */
