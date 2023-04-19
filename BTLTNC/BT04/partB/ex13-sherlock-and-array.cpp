//hàm sử dụng trên hackerrank, fail 2 test case do time limit exceeded: https://www.hackerrank.com/challenges/sherlock-and-array
string balancedSums(vector<int> arr) {
    bool check = false;
    int tong1 = 0, tong2 = 0;
    for (int j = 0; j < (int)arr.size(); ++j)
    {
        tong1 = 0;
        for (int k = 0; k < j; ++k)
        {
            tong1 += arr[k];
        }
        tong2 = 0;
        for (int q = j + 1; q < (int)arr.size(); ++q)
        {
            tong2 += arr[q];
        }
        if (tong1 == tong2) {
            check = true;
            break;
        }
    }
    if (check)
        return "YES";
    else
        return "NO";
}