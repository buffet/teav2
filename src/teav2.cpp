#include <docopt/docopt.h>

#include <iostream>

#define VERSION_STRING "1.0"

static const char USAGE[] =
R"(Usage:
    teav2 send RECIPIENT (-m | -f) OBJECT
    teav2 [OPTIONS]

Options:
    -h --help         Show this screen
    -v --version      Show version
    -i --interactive  Start in interactive mode
)";

int main(int argc, char *argv[]) {
    auto args = docopt::docopt(
        USAGE,
        { argv + 1, argv + argc },
        true,
        "teav2 v" VERSION_STRING
    );
}
