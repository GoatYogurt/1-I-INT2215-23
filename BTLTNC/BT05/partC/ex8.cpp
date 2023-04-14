//có sử dụng hàm ceil() và hàm floor()
int rnd(double x) {
    int a = x;
    double b = abs(x - a);
    if (x > 0) {
        if (b >= 0.5)
            return ceil(x);
        else return floor(x);
    } else {
        if (b >= 0.5)
            return floor(x);
        else return ceil(x);
    }
}

//không sử dụng hàm ceil() và hàm floor()
int rnd(double x) {
    int a = x;
    double b = abs(x - a);
    if (x > 0) {
        if (b >= 0.5)
            return a+1;
        else return a;
    } else {
        if (b >= 0.5)
            return a-1;
        else return a;
    }
}