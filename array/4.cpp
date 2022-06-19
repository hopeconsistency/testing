#include <bits/stdc++.h>
using namespace std;

vector<int> solution(vector<int> A, vector<int> B, vector<int> C, int n1, int n2, int n3)
{
    vector<int> ans;
    int i = 0, j = 0, k = 0;
    while (i < n1 && j < n2 && k < n3)
    {
        if (A[i] < B[j])
            i++;
        else if (A[i] > B[j])
            j++;
        else
        {
            // this is for checking duplicacy
            if (i > 0 && A[i] == A[i - 1])
            {
                i++;
                continue;
            }
            while (k < n3 && C[k] < B[j])
            {
                k++;
            }
            if (k < n3 && C[k] == B[j])
            {
                ans.push_back(C[k]);
            }
            i++;
            j++;
        }
    }
    return ans;
}

int main()
{
    vector<int> A{1, 5, 10, 20, 40, 80};
    vector<int> B{6, 7, 20, 80, 100};
    vector<int> C{3, 4, 15, 20, 30, 70, 80, 120};
    vector<int> D;
    int n1 = A.size();
    int n2 = B.size();
    int n3 = C.size();
    D = solution(A, B, C, n1, n2, n3);
    for (int i = 0; i < D.size(); i++)
        cout << D[i] << " ";
    return 0;
}
