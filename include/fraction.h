//
// Created by vscilab on 10/25/2018.
//

#ifndef FRACTION_FRACTION_H
#define FRACTION_FRACTION_H
#include<cstdint> //allows to use int32_t

    class fraction{
    public:
        fraction(int32_t numerator, int32_t denominator){
            this->numerator = numerator; //assigning the numerator to numerator
            this->denominator = denominator; //assigning the denominator to denominator
        };
    public:
        int32_t getNumerator() const;
        int32_t getDenominator() const;
        double getRealValue() const;

        void setNumerator(int32_t numerator);
        void setDenominator(int32_t denominator);

        void output();
    private:
        int32_t numerator;
        int32_t denominator;
    };

#endif //FRACTION_FRACTION_H
