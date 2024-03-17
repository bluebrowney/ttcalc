#ifndef BOOLEAN_VAR
#define BOOLEAN_VAR
#define A_ASCII 65
#define Z_ASCII 90


/*
* Class that represents a boolean variable construct
*/
class BooleanVariable {

private:
    class enum BooleanValue {

        FALSE, TRUE, NULL

    };

    const char symbol; //Any capital alphabetical character
    BooleanValue value = BooleanValue::NULL; //Current value of the variable
    static int NUM_VARS; //Tracks number of variables in system TODO: if user inputs variable other

public:
    //Constructors
    BooleanVariable();
    BooleanVariable(char);
    BooleanVariable(char, bool);
    BooleanVariable(const BooleanVariable&);

    //Destructors
    ~BooleanVariable();

    //Setting and Getting Value
    void setValue(bool);
    bool getValue();

    //Operator Overloading
    bool operator+(const BooleanVariable&);
    bool operator*(const BooleanVariable&);
    bool operator!();
    bool operator~();
}

#endif