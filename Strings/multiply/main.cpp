string Solution::multiply(string num1, string num2) {
    int n1 = num1.size();
            int n2 = num2.size();
            if (n1 == 0 || n2 == 0)     return "0";

            // will keep the result number in vector in reverse order
            std::vector<int> result(n1 + n2, 0);

            int i_n1 = 0; // index by num1
            int i_n2 = 0; // index by num2

            // go from right to left by num1
            for (int i = n1 - 1; i >= 0; i--){
                int carrier = 0;
                int n1 = num1[i] - '0';
                i_n2 = 0;

                // go from right to left by num2
                for (int j = n2 - 1; j >= 0; j--){
                    int n2 = num2[j] - '0';     

                    int sum = n1 * n2 + result[i_n1 + i_n2] + carrier;
                    carrier = sum / 10;
                    result[i_n1 + i_n2] = sum % 10;

                    i_n2++;
                }

                // store carrier in next cell
                if (carrier > 0)
                    result[i_n1 + i_n2] += carrier;

                i_n1++;
            }

            // ignore '0's from the right
            int i = result.size() - 1;
            while (i>=0 && result[i] == 0) i--;

            // if all were '0's - means either both or one of num1 or num2 were '0'
            if(i == -1) return "0";

            // generate the result string
            std::string s = "";
            while (i >= 0) s += std::to_string(result[i--]);

            return s;
}

