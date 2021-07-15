        #include "fraction.h"
        int fraction::gcd(const int &a, const int &b) const{
            return a % b ? gcd(b, a % b) : b;
        }
            // If you don't need this method, just ignore it.
        void fraction::simp(){
            for(int i=_numerator;i>1;i--)
            {
                if((_numerator%i==0)&&(_denominator%i==0))
                {
                    _numerator/=i;
                    _denominator/=i;
                }
            }
         }
        // To get the lowest terms.
        fraction::fraction(const int &a , const int &b ){
            _numerator = a;
            _denominator = b;
        }
            // The numerator and the denominator
            // fraction(5) = 5/1 = 5 :)
        fraction::fraction(const fraction &other){
            _numerator = other._numerator;
            _denominator = other._denominator;
        }
            // copy constructor

        void fraction::operator=(const fraction &other){
             _numerator = other._numerator;
            _denominator = other._denominator;
        }

        // You must know the meaning of +-*/, don't you ?
        fraction fraction::operator+(const fraction &other) const{
            fraction result;
            int LeastCommonFactor = other._denominator * _denominator /gcd(_denominator, other._denominator);
            result._numerator = _numerator * (LeastCommonFactor / _denominator) + other._numerator * (LeastCommonFactor /other._denominator);
            result._denominator = LeastCommonFactor;
            result.simp();
            return result;
        }
        fraction fraction::operator-(const fraction &other) const{
            fraction result;
            int LeastCommonFactor =  other._denominator * _denominator /gcd(_denominator, other._denominator);
            result._numerator = _numerator * (LeastCommonFactor / _denominator) - other._numerator * (LeastCommonFactor /other._denominator);
            result._denominator = LeastCommonFactor;
            result.simp();
            return result;
        }
        fraction fraction::operator*(const fraction &other) const{
            fraction result(_numerator * other._numerator, _denominator * other._denominator);
            result.simp();
            return result;
        }
        fraction fraction::operator/(const fraction &other) const{
            fraction result(_numerator * other._denominator, _denominator * other._numerator);
            result.simp();
            return result;
        }

        void fraction::operator+=(const fraction &other){
            *this = other + *this;
        }
        void fraction::operator-=(const fraction &other){
            *this = *this-other;
        }
        void fraction::operator*=(const fraction &other){
            *this = other * *this;
        }
        void fraction::operator/=(const fraction &other){
            *this = *this/other;
        }

        // Comparison operators
        bool fraction::operator==(const fraction &other) const{
            double val1 = _numerator * 1.0 / _denominator;
            double val2 = other._numerator * 1.0 / other._denominator;
            if(val1==val2)
                return 1;
            else
                return 0;
        }
        bool fraction::operator!=(const fraction &other) const{
            if(*this==other)
                return 0;
            else
                return 1;
        }
        bool fraction::operator<(const fraction &other) const{
             double val1 = _numerator * 1.0 / _denominator;
            double val2 = other._numerator * 1.0 / other._denominator;
            if(val1<val2)
                return 1;
            else
                return 0;
        }
        bool fraction::operator>(const fraction &other) const{
             double val1 = _numerator * 1.0 / _denominator;
            double val2 = other._numerator * 1.0 / other._denominator;
            if(val1>val2)
                return 1;
            else
                return 0;
        }
        bool fraction::operator<=(const fraction &other) const{
            if(*this>other)
                return 0;
            else
                return 1;
        }
        bool fraction::operator>=(const fraction &other) const{
            if(*this<other)
                return 0;
            else
                return 1;
        }

        std::istream &operator>>(std::istream &i, fraction &obj){
            i >> obj._numerator >> obj._denominator;
            return i;
        }
            // Input Format: two integers with a space in it
            // "a b" is correct. Not "a/b"
        std::ostream &operator<<(std::ostream &o, const fraction &obj){
            o << obj._numerator;
            if(obj._denominator!=1)
                o <<'/'<< obj._denominator;
            return o;
        }

