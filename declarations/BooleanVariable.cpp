#include "../headers/BooleanVariable.h"

//Setting Static Variable
BooleanVariable::NUM_VARS = 0;

BooleanVariable::BooleanVariable() {

	this->sym = A_ASCII + NUM_VARS;

}

BooleanVariable::BooleanVariable(char sym) {

	NUM_VARS++;

	if (sym >= A_ASCII && sym <= Z_ASCII) {
		this->symbol = sym;
	}
	else {
		this->symbol = A_ASCII + NUM_VARS;
	}

	value = BooleanVariable::BooleanValue::NULL;

}

BooleanVariable::~BooleanVariable() {

	NUM_VARS--;

}