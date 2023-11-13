#include <iostream>
#include <vector>
#include <cstdint>
#include <random>
#include <cmath>

typedef std::vector<std::uintmax_t> DType;

DType Facterlizer(const std::uintmax_t& N) {
	
	DType R;

	std::uintmax_t S = std::sqrt(N)+1;

	for (std::uintmax_t i = 2; i <= S; i++) {
		if (!(N % i)) {
			R.push_back(i);
			R.push_back(N / i);
		}
	}
	if (R.size() == 0) { R.push_back(N); }

	std::cout << std::endl << S << std::endl;

	return R;
}

int main() {
	std::random_device rd;
	std::mt19937 mt(rd());

	std::uintmax_t R = mt();

	std::cout << R << std::endl;
	auto X = Facterlizer(R);

	std::cout << '['<<X.size()<<']';
	for (auto& o : X) {
		std::cout << o<<',';
	}
	std::cout << std::endl;

	return 0;
}