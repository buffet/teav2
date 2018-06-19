#include "docopt/docopt.h"

#include "Client.hpp"

#include <cstdlib>
#include <iostream>

static const char USAGE[] =
R"(teav2
Usage:
    teav2 send RECIPIENT (-m | -f) OBJECT
    teav2 [OPTIONS]

Options:
    -h --help         Show this screen
    -v --version      Show version
)";

int main(int argc, char *argv[]) {
    auto args = docopt::docopt(
        USAGE,
        { argv + 1, argv + argc },
        true,
        "teav2 v0.0"
    );

	if (args["send"].asBool()) {
		std::cerr << "send is not yet implemented." << std::endl;
		std::exit(EXIT_FAILURE);
	}

	teav2::Client client;
	client.loop();
}
