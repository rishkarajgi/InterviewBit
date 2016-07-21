 int64_t n = numerator, d = denominator;
            // zero numerator
            if (n == 0) return "0";

            string res;
            // determine the sign
            if (n < 0 ^ d < 0) res += '-';

            // remove sign of operands
            n = abs(n), d = abs(d);

            // append integral part
            res += to_string((n / d));

            // in case no fractional part
            if (n % d == 0) return res;

            res += '.';

            unordered_map<int, int> map;

            // simulate the division process
            for (int64_t r = n % d; r; r %= d) {

                // meet a known remainder
                // so we reach the end of the repeating part
                if (map.find(r) != map.end()) {
                    // insert '(' at the start position where we first saw the remainder
                    res.insert(map[r], 1, '(');
                    res += ')';
                    break;
                }

                // the remainder is first seen
                // remember the current position for it
                map[r] = res.size();

                r *= 10;

                // append the quotient digit
                res.push_back((char)('0' + (r / d)));
            }

            return res;    
