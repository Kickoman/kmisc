#include <iostream>
#include "variant.h"
#include "validator.h"

using namespace std;
using namespace PolymorphicTypes;

int main()
{
    int x = 4;

    Validation::Validator validator;
    validator.addRule(Validation::Rule(&x, Validation::RuleOperator::Greater, 20));
    validator.addRule(Validation::Rule(&x, Validation::RuleOperator::Less, 40));

    for (int i = 0; i < 5; ++i)
    {
        cout << "Input x:" << endl;
        cin >> x;
        cout << "Validator output: " << validator.validate() << endl;
    }
    return 0;
}
