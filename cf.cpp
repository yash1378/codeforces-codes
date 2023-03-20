#include <iostream>
using namespace std;

int main(){
    // your code goes here
    int t;
    cin >> t;
    for (int i = 0; i < t; i++){
        int n;
        cin >> n;
        string s;
        cin >> s;
        string a = s;
        int p = 0;
        int q = n - 1;
        for (int j = 1; j < n + 1; j++)
        {
            for (int k = 1; k < j + 1; k++)
            {
                if (k % 2 != 0)
                {
                    if (s[p] == 'L')
                    {
                        s[p] = 'R';
                        p++;
                    }
                    else
                    {
                        p++;
                    }
                }
                else
                {
                    if (s[q] == 'L')
                    {
                        q--;
                    }
                    else
                    {
                        s[q] = 'L';
                        q--;
                    }
                }
            }

            cout << s << " ";
        }
        s = a;
        cout << endl;
    }
    return 0;
}


            // int c=0;
            // for(int w=0;w<n;w++){
            //     if(s[w]=='L'){
            //         c+=w;
            //     }
            //     else{
            //         c+=n-1-w;
            //     }
            // }