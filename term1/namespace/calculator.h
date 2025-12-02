namespace calculator {
    int addition(int a , int b) {
        return a+b;
    }

    int multiplication(int a , int b) {
        return a*b;
    }

    int subtraction(int a , int b) {
        return a -b;
    }

    int division(int a , int b ) {
        if(b==0) {
          return -1;
        }
        return a / b;
    }

    int pow(int a , int b ) {
        if (b == 0) return 1;
        if (b == 1) return a;
        int pow = 1;
        for (int i = 0 ; i<b  ; i++) {
            pow *=a;
        }
        return pow;
    }
}