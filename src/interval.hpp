#pragma once

class algebra::Interval {
public:
    Inequation lhs;
    RelationalOperator opr;
    Polynomial rhs;

    constexpr Interval() = default;

    Interval(const Inequation& lhs, const RelationalOperator opr, const Polynomial& rhs) : lhs(lhs), opr(opr), rhs(rhs) {}
};

inline algebra::Interval operator<(const algebra::Inequation& lhs, const algebra::Fraction& rhs) {
    return algebra::Interval(lhs, algebra::RelationalOperator::LT, rhs);
}

inline algebra::Interval operator<=(const algebra::Inequation& lhs, const algebra::Fraction& rhs) {
    return algebra::Interval(lhs, algebra::RelationalOperator::LE, rhs);
}

inline algebra::Interval operator>(const algebra::Inequation& lhs, const algebra::Fraction& rhs) {
    return algebra::Interval(lhs, algebra::RelationalOperator::GT, rhs);
}

inline algebra::Interval operator>=(const algebra::Inequation& lhs, const algebra::Fraction& rhs) {
    return algebra::Interval(lhs, algebra::RelationalOperator::GE, rhs);
}

inline algebra::Interval operator==(const algebra::Inequation& lhs, const algebra::Fraction& rhs) {
    return algebra::Interval(lhs, algebra::RelationalOperator::EQ, rhs);
}

inline algebra::Interval operator<(const algebra::Fraction& lhs, const algebra::Inequation& rhs) { return rhs > lhs; }

inline algebra::Interval operator<=(const algebra::Fraction& lhs, const algebra::Inequation& rhs) { return rhs >= lhs; }

inline algebra::Interval operator>(const algebra::Fraction& lhs, const algebra::Inequation& rhs) { return rhs < lhs; }

inline algebra::Interval operator>=(const algebra::Fraction& lhs, const algebra::Inequation& rhs) { return rhs <= lhs; }

inline algebra::Interval operator==(const algebra::Fraction& lhs, const algebra::Inequation& rhs) { return rhs == lhs; }

inline algebra::Interval operator<(const algebra::Inequation& lhs, const algebra::Variable& rhs) {
    return algebra::Interval(lhs, algebra::RelationalOperator::LT, rhs);
}

inline algebra::Interval operator<=(const algebra::Inequation& lhs, const algebra::Variable& rhs) {
    return algebra::Interval(lhs, algebra::RelationalOperator::LE, rhs);
}

inline algebra::Interval operator>(const algebra::Inequation& lhs, const algebra::Variable& rhs) {
    return algebra::Interval(lhs, algebra::RelationalOperator::GT, rhs);
}

inline algebra::Interval operator>=(const algebra::Inequation& lhs, const algebra::Variable& rhs) {
    return algebra::Interval(lhs, algebra::RelationalOperator::GE, rhs);
}

inline algebra::Interval operator==(const algebra::Inequation& lhs, const algebra::Variable& rhs) {
    return algebra::Interval(lhs, algebra::RelationalOperator::EQ, rhs);
}

inline algebra::Interval operator<(const algebra::Variable& lhs, const algebra::Inequation& rhs) { return rhs > lhs; }

inline algebra::Interval operator<=(const algebra::Variable& lhs, const algebra::Inequation& rhs) { return rhs >= lhs; }

inline algebra::Interval operator>(const algebra::Variable& lhs, const algebra::Inequation& rhs) { return rhs < lhs; }

inline algebra::Interval operator>=(const algebra::Variable& lhs, const algebra::Inequation& rhs) { return rhs <= lhs; }

inline algebra::Interval operator==(const algebra::Variable& lhs, const algebra::Inequation& rhs) { return rhs == lhs; }

inline algebra::Interval operator<(const algebra::Inequation& lhs, const algebra::Polynomial& rhs) {
    return algebra::Interval(lhs, algebra::RelationalOperator::LT, rhs);
}

inline algebra::Interval operator<=(const algebra::Inequation& lhs, const algebra::Polynomial& rhs) {
    return algebra::Interval(lhs, algebra::RelationalOperator::LE, rhs);
}

inline algebra::Interval operator>(const algebra::Inequation& lhs, const algebra::Polynomial& rhs) {
    return algebra::Interval(lhs, algebra::RelationalOperator::GT, rhs);
}

inline algebra::Interval operator>=(const algebra::Inequation& lhs, const algebra::Polynomial& rhs) {
    return algebra::Interval(lhs, algebra::RelationalOperator::GE, rhs);
}

inline algebra::Interval operator==(const algebra::Inequation& lhs, const algebra::Polynomial& rhs) {
    return algebra::Interval(lhs, algebra::RelationalOperator::EQ, rhs);
}

inline algebra::Interval operator<(const algebra::Polynomial& lhs, const algebra::Inequation& rhs) { return rhs > lhs; }

inline algebra::Interval operator<=(const algebra::Polynomial& lhs, const algebra::Inequation& rhs) { return rhs >= lhs; }

inline algebra::Interval operator>(const algebra::Polynomial& lhs, const algebra::Inequation& rhs) { return rhs < lhs; }

inline algebra::Interval operator>=(const algebra::Polynomial& lhs, const algebra::Inequation& rhs) { return rhs <= lhs; }

inline algebra::Interval operator==(const algebra::Polynomial& lhs, const algebra::Inequation& rhs) { return rhs == lhs; }

namespace std {
    inline string to_string(const algebra::Interval& interval) {
        string res = to_string(interval.lhs);
        res.push_back(' ');
        return res.append(to_string(interval.opr)).append(to_string(interval.rhs));
    }
} // namespace std

inline std::ostream& algebra::operator<<(std::ostream& out, const Interval& interval) { return out << std::to_string(interval); }
