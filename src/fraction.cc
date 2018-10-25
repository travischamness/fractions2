/*
 * Travis Chamness
 * 10/25
 * Fraction Implementation
 * */

#include"fraction.h"
#include <string>
void fraction::setNumerator(int32_t numerator){
    this->numerator = numerator;
}
void fraction::setDenominator(int32_t denominator) {
 this->denominator = denominator;
}

int32_t fraction::getDenominator() const {
    return denominator;
}
int32_t fraction::getNumerator() const {
    return numerator;
}
string fraction::output() {

}