    #include <iostream>
    using namespace std;
    int main()
    {
        int i,sum;
        sum=0;
        cout<<"1+2+3...+100 = ";

        for ( i = 1; i <= 100;i= ++i) {
            sum += i;
        }
        cout << sum;
        return 0;
    }
