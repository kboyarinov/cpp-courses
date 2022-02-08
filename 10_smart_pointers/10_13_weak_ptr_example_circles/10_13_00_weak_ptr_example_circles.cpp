// Circular dependency

#include <memory>

struct person {
    std::shared_ptr<person> partner;
};

int main() {
    std::shared_ptr<person> p(new person());
    p.partner = p;
}
