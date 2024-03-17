#ifndef TRUTH_TABLE
#define TRUTH_TABLE


#define DEFAULT_INPUT_SIZE 2

class TruthTable {
private:
    size_t num_inputs;
    char[DEFAULT_INPUT_SIZE] inputs;

public:
    TruthTable();
    TruthTable(BooleanExpression expr);
}

#endif