/*
computes base raised to the power of exponent
*/
int power(int base, int exponent) {
        int result = 1;

        //use a loop to compute the result         
        for(int i = 0; i < exponent; i++){     
                result = result * base;
                printf("***DEBUG: base %d exponent %d result %d i %d\n", base, exponent,
                        result, i);

        }

        //because the return type of the power function is not void
        //we need a return statement with the correct type
        return result;
}

