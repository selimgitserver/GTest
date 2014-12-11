/*
 * factorial.cpp
 *
 *  Created on: 11 Ara 2014
 *      Author: selim
 */

int factorial(int n) {
        int result = 1;
        for (int i = 1; i <= n; i++) {
                result *= i;
         }
        return result;
}


