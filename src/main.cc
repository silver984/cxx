#include <fmt/color.h>
#include <fmt/core.h>

int main() {
	fmt::print(fg(fmt::color::yellow) | fmt::emphasis::bold, "Hello world!\n");
	return 0;
}
