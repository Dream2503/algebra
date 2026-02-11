#include "algebra.hpp"

using namespace algebra;

int main() {
    const Matrix<Fraction> matrix({{1, 2}, {2, 1}});
    std::cout << matrix << std::endl;
    std::cout << matrix.inverse();
    return 0;
}
