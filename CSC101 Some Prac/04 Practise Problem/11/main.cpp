    #include <iostream>
    using namespace std;
    int main()
    {
        int sum = 0;
        cout << "2+4+8+16...+1024 = ";

        for (int i = 2; i <= 1024; i=i*2) {
            sum =(i*2)-2;
        }
        cout << sum;
        return 0;
    }
